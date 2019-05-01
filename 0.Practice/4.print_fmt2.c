/*************************************************************************
	> File Name: 4.print_fmt2.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月01日 星期三 21时13分54秒
 ************************************************************************/

/* 测试标志字符为-、+、#、空格四种 */
#include <stdio.h>
int main()
{
/* 以十进制形式输出带符号整数(正数不输出符号) */
printf("*%-10d*\n", 223);
printf("*%+10d*\n" , 232);
printf("*%2d*\n" , 223);
printf("*%#d*\n" , -232);
printf("\n");
/* 以八进制形式输出无符号整数(不输出前缀O) */
printf("*%-10o*\n" , 223);
printf("*%+10o*\n" , -232);
printf("*%o*\n" , 223);
printf("*%#o*\n" , -232);
printf("\n");
/* 以十六进制形式输出无符号整数(不输出前缀OX) */
printf("$%-10x$\n" , 223);
printf("$%010x$\n" , -232);
printf("$% x$\n" , 223);
printf("$%#x$\n" , -232);
printf("\n");
/* 以十进制形式输出无符号整数 */
printf("%-10u\n" , 223);
printf("%+10u\n" , -232);
printf("% u\n" , 223);
printf("%#u\n" , -232);
printf("\n");
/* 以小数形式输出单、双精度实数 */
printf("%-10f\n" , 223.11);
printf("%+10f\n" , 232.11111111);
printf("% f\n" , -223.11);
printf("%#f\n" , -232.11111111);
printf("\n");
/* 以指数形式输出单、双精度实数 */
printf("%-10e\n" , 223.11);
printf("%+10e\n" , 232.11111111);
printf("% e\n" , -223.11);
printf("%#e\n" , -232.11111111);
printf("\n");
/* 以%f%e中较短的输出宽度输出单、双精度实数 */
printf("%-10g\n" , 223.11);
printf("%+10g\n" , 232.111111111111);
printf("% g\n" , -223.11);
printf("%#g\n" , -232.111111111111);
printf("\n");
/* 输出单个字符 */
printf("%-10c\n" , 'a');
printf("%+10c\n" , 97);
printf("% c\n" , 'a');
printf("%#c\n" , 97);
printf("\n");
/* 输出单个字符 */
printf("%-20s\n" , "this is a test!");
printf("%+20s\n" , "2342o34uo23u");
printf("% 20s\n" , "this is a test!");/* 不足补空格 */
printf("%#s\n" , "2342o34uo23u");
printf("\n");
}
