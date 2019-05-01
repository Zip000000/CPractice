/*************************************************************************
	> File Name: 1.define.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月01日 星期三 18时26分40秒
 ************************************************************************/

#include<stdio.h>
#define M N
#define N O
#define O 100
#define A 99

int main() {
    int a = 1;
    int b = 0;
    if(a == 1) 
        b = M;
    else
        b = -1;
        

    printf("a = %d\n b = %d\n", a, b);

    return 0;
}
