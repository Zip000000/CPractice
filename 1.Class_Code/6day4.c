/*************************************************************************
	> File Name: 6day4.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月04日 星期六 19时16分20秒
 ************************************************************************/

#include<stdio.h>

#define P(a, b) { \
    printf("%s = %d   expect = %d\n", #a, a, b);  \
}

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int a = 7;
    P(MAX(a++, 6), 7);

    P(a, 8); 
    return 0;
}
