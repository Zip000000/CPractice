/*************************************************************************
	> File Name: day3_5.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月20日 星期六 16时59分01秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    do{
        sum++;
    } while (n /= 10);
    printf("%d\n", sum);
    return 0;
}
