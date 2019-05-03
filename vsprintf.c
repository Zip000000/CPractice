/*
 *  linux/kernel/vsprintf.c
 *
 *  Copyright (C) 1991, 1992  Linus Torvalds
 */

/* vsprintf.c -- Lars Wirzenius & Linus Torvalds. */
/*
 * Wirzenius wrote this portably, Torvalds fucked it up :-)      hhhhhhhhhhhhhhhhhhhhhh......
 */

#include <stdarg.h>
#include <linux/types.h>
#include <linux/string.h>
#include <linux/ctype.h>

unsigned long simple_strtoul(const char *cp,char **endp,unsigned int base) //功能：将一个字符串转换成unsigend long型数据。返回：返回转换后数据。
{
	unsigned long result = 0,value;

	if (!base) {
		base = 10;
		if (*cp == '0') {
			base = 8;
			cp++;
			if ((*cp == 'x') && isxdigit(cp[1])) {
				cp++;
				base = 16;
			}
		}
	}
	while (isxdigit(*cp) && (value = isdigit(*cp) ? *cp-'0' : (islower(*cp)
	    ? toupper(*cp) : *cp)-'A'+10) < base) {
		result = result*base + value;
		cp++;
	}
	if (endp)
		*endp = (char *)cp;
	return result;
}

/* we use this so that we can do without the ctype library */
#define is_digit(c)	((c) >= '0' && (c) <= '9')
//宏函数is_digit(c)用来判断c是不是0-9的字符
//skip_atoi用来将传入的 数字字符串 转化为int类型
static int skip_atoi(const char **s) //传入一个指向字符指针类型的指针
{
	int i=0;

	while (is_digit(**s))   //当*s指向的字符是数字字符时进入循环,该函数退出时*s指向当前格式字符串的最后一位数字的后一位
		i = i*10 + *((*s)++) - '0';//将数字存入i。
    //“ -'0' ”这里注意：数字字符的ASCII值 减去 字符0的ASCII值 得到的ASCII值就是这个数字字符本身表示的数字。  (或者 异或48 也可以)
	return i;
}

#define ZEROPAD	1		/* pad with zero */
#define SIGN	2		/* unsigned/signed long */
#define PLUS	4		/* show plus */
#define SPACE	8		/* space if plus */
#define LEFT	16		/* left justified */
#define SPECIAL	32		/* 0x */
#define SMALL	64		/* use 'abcdef' instead of 'ABCDEF' */

#define do_div(n,base) ({ \
int __res; \
__asm__("divl %4":"=a" (n),"=d" (__res):"0" (n),"1" (0),"r" (base)); \
__res; })
//宏函数 处理进制
//
//参数 1.buf指针  2.数值  3.进制  4.宽度  5.精度  6.flag标记
static char * number(char * str, int num, int base, int size, int precision
	,int type)
{
	char c,sign,tmp[36];
	const char *digits="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	if (type&SMALL) digits="0123456789abcdefghijklmnopqrstuvwxyz";
	if (type&LEFT) type &= ~ZEROPAD;   //若左对齐则不用考虑前导0
	if (base<2 || base>36)   //基数 即进制 必须在[2, 36] 之间
		return 0;
	c = (type & ZEROPAD) ? '0' : ' ' ;     //决定前导是 0 还是 空格
	if (type&SIGN && num<0) {        //若为有符号数据类型  而且num是负数
		sign='-';                   //将负号保存到sign
		num = -num;                 //num变为正
	} else     //若为无符号数据类型，或者num是非负数
		sign=(type&PLUS) ? '+' : ((type&SPACE) ? ' ' : 0);  //若满足“%+”，将+保存到sign。若不满足“%+”，则看是否满足“% ”，满足则保存 空格 到sign，不满足则保存0到sign。
	if (sign) size--;            //如果有符号  即sign的值不是0  size减去1
	if (type&SPECIAL)  //处理 “%#” 若有 %# 的需求  将size减去对应的值  
		if (base==16) size -= 2;   //16进制--0x--两个
		else if (base==8) size--;  //8进制--0--一个
	i=0;
	if (num==0)
		tmp[i++]='0';     //若待打印的数字是0  直接存入tmp
	else while (num!=0)   //若待打印的数字数字不是0
		tmp[i++]=digits[do_div(num,base)];   //将num进行进制转换后的值存入tmp
	if (i>precision) precision=i;   //如果 实际数字字符总长度 大于要求的精度
	size -= precision;          //size减去总长度  size保存的应该是需要补位部分的位数
	if (!(type&(ZEROPAD+LEFT))) //若既不满足 %0 又 不满足 %- ，也就是右对齐，前面又不填前导0，
		while(size-->0)   
			*str++ = ' ';      //此时填 空格 补前面的位
	if (sign)               //空位补上之后, 输出符号
		*str++ = sign;
	if (type&SPECIAL)      //处理 %#
		if (base==8)
			*str++ = '0';
		else if (base==16) {
			*str++ = '0';
			*str++ = digits[33];  // x或X
		}
	if (!(type&LEFT))  //若不用左对齐
		while(size-->0)
			*str++ = c;   //用 c保存的字符 补位，补位是为了满足输出总宽度
	while(i<precision--)  //若要求精度 大于 实际数字字符总长度 用0补位。  这是为了满足精度
		*str++ = '0';
	while(i-->0)
		*str++ = tmp[i];   //输出数字
	while(size-->0)  //若左对齐在这里输出后面补位的空格，非左对齐的已经在前面处理完了。
		*str++ = ' ';
	return str;
}

// %[标志][输出最小宽度][.精度][长度]类型

int vsprintf(char *buf, const char *fmt, va_list args)//buf是待被写入的字符串的指针，fmt是控制格式化输入的部分，最后是参数列表
{
	int len;
	int i;
	char * str;
	char *s;
	int *ip;

	int flags;		/* flags to number() */

	int field_width;	/* width of output field */
	int precision;		/* min. # of digits for integers; max
				   number of chars for from string */
	int qualifier;		/* 'h', 'l', or 'L' for integer fields */

	for (str=buf ; *fmt ; ++fmt) {  //扫描格式说明符 for循环第三个表达式 fmt++ 和 ++fmt效果一样。但是++i效率更好，因为不需要处理临时变量。
		if (*fmt != '%') { //没有遇到格式说明符% 则是普通字符，直接存到buf
			*str++ = *fmt; //将fmt中%之前的字符按顺序保存到str中  *str++ 等于 *(str++)
			continue;   //用continue使这段程序循环执行，没有格式说明符就一直往后遍历，学到了。
		}
			
		/* process flags */
		flags = 0;
		repeat:     //goto语句的语句标号
			++fmt;		/* this also skips first '%' */ //fmt后移一个，跳过%
			switch (*fmt) {
				case '-': flags |= LEFT; goto repeat;  //左对齐，缺省情况是右对齐
				case '+': flags |= PLUS; goto repeat;  //输出符号(+或-)(0只能为+)且右对齐，缺省时忽略正数的符号。仅适用于数值类型。
				case ' ': flags |= SPACE; goto repeat; //符号位占位，负数输出负号，正数输出空格。若与+同时出现，则空格说明符被忽略。
				case '#': flags |= SPECIAL; goto repeat;//输出十六进制前加上前缀0x或0X(大小写)，八进制加前缀0。对于 g和G，不删除尾部0以表示精度。对于f F e E g G 总输出小数点。
				case '0': flags |= ZEROPAD; goto repeat;//输出前导0占位来达到宽度要求，如果0与-均出现，则0被忽略，即左对齐依然用空格填充。
				}
		
		/* get field width */
		field_width = -1;  //int型，表示输出字符的宽度
		if (is_digit(*fmt))   //如果是数字字符
			field_width = skip_atoi(&fmt); //将char类型转化为int
		else if (*fmt == '*') {   //*类似于占位符，实际的数字储存在变参列表中对应的位置
			/* it's the next argument */
			field_width = va_arg(args, int);//从变参列表中取出
			if (field_width < 0) {          //若未进行字符宽度控制，field_width<0
				field_width = -field_width; //默认field_width=1
				flags |= LEFT;              //若未进行宽度设置  则默认左对齐
			}
		}

		/* get the precision */   //处理控制精度部分，与上边处理方法几乎相同
		precision = -1;
        if (*fmt == '.') {  //若出现了. 说明对输出精度有要求
			++fmt;   	    //跳过.
			if (is_digit(*fmt))  
				precision = skip_atoi(&fmt);    //将.后面的数字转化成int类型储存到precision中
			else if (*fmt == '*') {      //如果是用*符号控制的精度，那么从args中提取它
				/* it's the next argument */
				precision = va_arg(args, int);
			}
			if (precision < 0)
				precision = 0;   //默认precision=0
		}

		/* get the conversion qualifier */
		qualifier = -1;
		if (*fmt == 'h' || *fmt == 'l' || *fmt == 'L') {
			qualifier = *fmt;
			++fmt;
		}

		switch (*fmt) {
		case 'c'://字符类型
			if (!(flags & LEFT))    //若不是左对齐，进入if
				while (--field_width > 0)
					*str++ = ' ';   //以空格补前面的位
			*str++ = (unsigned char) va_arg(args, int); //将ascii形式存储的字符转成char，并写入buf
			while (--field_width > 0) //左对齐，空格补后面的位
				*str++ = ' ';
			break;

		case 's':  //字符串类型
			s = va_arg(args, char *);    //前面定义s是char* 类型
			if (!s)    //若传入的字符串为空，处理一下s
				s = "<NULL>";
			len = strlen(s);//开始，储存长度
			if (precision < 0)
				precision = len;  
			else if (len > precision) //如果要求的精度小于字符串实际长度，则更新len值
				len = precision;

			if (!(flags & LEFT))  //没要求左对齐，进入if
				while (len < field_width--)
					*str++ = ' ';   //空格补位
			for (i = 0; i < len; ++i)  //输出len长度的字符串
				*str++ = *s++;
			while (len < field_width--)
				*str++ = ' ';
			break;
//下面数值类型的输出都交给number函数完成
		case 'o':   //八进制类型
			str = number(str, va_arg(args, unsigned long), 8,
				field_width, precision, flags);
			break;

		case 'p': //指针类型
			if (field_width == -1) {
				field_width = 8;
				flags |= ZEROPAD;
			}
			str = number(str,
				(unsigned long) va_arg(args, void *), 16,
				field_width, precision, flags);
			break;

		case 'x': //十六进制类型小写
			flags |= SMALL;
		case 'X'://大写
			str = number(str, va_arg(args, unsigned long), 16,
				field_width, precision, flags);
			break;

		case 'd':
		case 'i':
			flags |= SIGN;
		case 'u':
			str = number(str, va_arg(args, unsigned long), 10,
				field_width, precision, flags);
			break;

		case 'n':   //%n，传入一个整型指针，printf向其中存储当前已经输出的字符个数，不会输出。
			ip = va_arg(args, int *);
			*ip = (str - buf);
			break;

		default:
			if (*fmt != '%')   //如果当前的字符不是%（也就是不是两个%连着的情况） ，就写入一个%（第一个%）。比如“%w” ，就会输出“%w” ，w在下面的if中输出。
				*str++ = '%';
			if (*fmt)   //这里注意，两个%相连的情况在这里处理，直接跳过第一个%，因为当前fmt指向的就是紧接着第一个%后面的字符，因此只输出一个%。
            //若只有一个%，比如%w,  则会输出%w， %在上一个if语句中输出，w在本语句中输出。
				*str++ = *fmt;   //只输出一个字符，如果是 %www  ，第一个之后的w都重新进入循环。
			else
				--fmt;   //如果第一个%之后没有字符，即%结尾
            break;
		}
	}
	*str = '\0';  //结尾
	return str-buf;
}

int sprintf(char * buf, const char *fmt, ...)
{
	va_list args;
	int i;

	va_start(args, fmt);
	i=vsprintf(buf,fmt,args);
	va_end(args);
	return i;
}

