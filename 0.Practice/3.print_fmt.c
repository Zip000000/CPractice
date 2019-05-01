/*************************************************************************
	> File Name: 3.print_fmt.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月01日 星期三 19时54分29秒
 ************************************************************************/


/* 测试常见的输出类型 */
#include <stdio.h>
// #include <conio.h>
int main()
{
printf("The program test print style!\n");
/* 以十进制形式输出带符号整数(正数不输出符号) */
printf("%d\n" , 223);
printf("%d\n" , -232);
printf("\n");
/* 以八进制形式输出无符号整数(不输出前缀O) */
printf("%o\n" , 223);
printf("%o\n" , -232);
printf("\n");
/* 以十六进制形式输出无符号整数(不输出前缀OX) */
printf("%x\n" , 223);
printf("%x\n" , -232);
printf("\n");
/* 以十进制形式输出无符号整数 */
printf("%u\n" , 223);
printf("%u\n" , -232);
printf("\n");
/* 以小数形式输出单、双精度实数 */
printf("%f\n" , 223.11);
printf("%f\n" , 232.11111111);
printf("%f\n" , -223.11);
printf("%f\n" , -232.11111111);
printf("\n");
/* 以指数形式输出单、双精度实数 */
printf("%e\n" , 223.11);
printf("%e\n" , 232.11111111);
printf("%e\n" , -223.11);
printf("%e\n" , -232.11111111);
printf("\n");
/* 以%f%e中较短的输出宽度输出单、双精度实数 */
printf("%g\n" , 223.11);
printf("%g\n" , 232.111111111111);
printf("%g\n" , -223.11);
printf("%g\n" , -232.111111111111);
printf("\n");
/* 输出单个字符 */
printf("%c\n" , 'a');
printf("%c\n" , 97);
printf("\n");
/* 输出单个字符 */
printf("%s\n" , "this is a test!");
printf("%s\n" , "2342o34uo23u");
printf("\n");
getchar();
}
