/*************************************************************************
	> File Name: 2.define_func.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月01日 星期三 19时05分18秒
 ************************************************************************/

#include<stdio.h>

#define SQARE(X) (X)*(X)


int main() {
    int a = 5;
    int ans = SQARE(a+1);

    printf("%d\n", ans);

    return 0;
}
