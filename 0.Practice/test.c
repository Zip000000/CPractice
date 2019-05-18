/*************************************************************************
	> File Name: test.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月01日 星期三 20时40分58秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>

int main() {
    int a[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j =0; j < 5; j++) {
            a[i][j] = 10*i + j;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %p \n", i, a[i]);
    }
    printf("a=%p\n", a);
    printf("a=%d\n", **a);
    printf("a00 = %d\n",a[0][0]);
    
    printf("----------------------------\n");
    for (int i = 0; i< 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("&a[%d][%d] = %p\n", i, j, &a[i][j]);
        }
    }
    printf("----------------------------\n");

    char c = '9';
    printf("char c c= %c\n", c);
    printf("char c d = %d\n", c);
    printf("c ^ 48 d= %d \n", c^48);
    printf("c - 48 d= %d \n", (c-48));
    printf("c ^ '0' d= %d \n", c^'0');
    printf("c - '0' d= %d \n", c-'0');



    
    return 0;
}



