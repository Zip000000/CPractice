/*************************************************************************
	> File Name: day3_7.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月20日 星期六 20时44分45秒
 ************************************************************************/

#include<stdio.h>

void line(int k, int b, int i)
{
    i == 0 || printf(" ");
    printf("%d",k*i+b);
}

int main(){
    int k, b;
    scanf("%d%d", &k, &b);
    for(int i = 0; i < 100; i++){
        line(k,b,i);
    }
    printf("\n");
    return 0;
}
