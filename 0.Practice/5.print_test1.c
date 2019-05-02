/*************************************************************************
	> File Name: 4.printf_test1.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月02日 星期四 09时43分23秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
int main() {
    printf("+++++++\n");
    printf("-0 = %+10d\n", -0);
    printf("+0 = %+10d\n", +0);
    for(int i = 0; i < 10; i++) {
        printf("%+10d\n", i*5);
    }
    printf("-------\n");
    for(int i = 0; i < 10; i++) {
        printf("%-10d\n", -i*5);
    }
    printf("space:\n");
    for(int i = 0; i < 10; i++) {
        printf("% d\n", -i*5);
    }
    printf(" has %d degit\n", printf("% d", -99));
    printf(" has %d degit\n", printf("% d", +88));
    
    printf("#######:\n");
    for(int i = 0; i < 10; i++) {
        printf("o: %#10o\n", i*5);
        printf("x: %#10x\n", i*5);
    }
    printf("0000000:\n");
    for(int i = 0; i < 10; i++) {
        printf("d: %010d\n", -i*5);
        printf("x: %010x\n", i*5);
        printf("o: %010o\n", i*5);
    }
    printf("\n");
    printf("******:\n");
    for(int i = 0; i < 10; i++) {
        printf("%*.*d\n", 9, 2, i*5);
    }
    printf("test str****\n");
    char str[20] = "abcdefghijklmnopqrst";
    int num[6];
    num[0] = printf("%.25s\n", str);
    num[1] = printf("%25s\n", str);
    num[2] = printf("%.5s\n", str);
    num[3] = printf("%3.5s\n", str);
    num[4] = printf("%3.10s\n", str);
    num[5] = printf("%10.5s\n", str);
    for(int i = 0; i < 6; i++) {
        printf("a%d = %d\n", i, num[i]);
    }

    printf("nnnnnn\n");

    int n;
    printf("hello world %n\n", &n);
    printf("n = %d\n", n);

    printf("输出%%\n");
    printf("%%d%t%yiiii\n");
    return 0;
}
