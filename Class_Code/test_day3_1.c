/*************************************************************************
	> File Name: test_day3_1.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月20日 星期六 15时13分27秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n==0)
    {
        printf("FOOLISH\n");
    }
    else if(n<60 && n>0)
    {
        printf("FAIL\n");
    }
    else if(n>=60 && n<75)
    {
        printf("MEDIUM\n");
    }
    else if(n>=75 && n<=100)
    {
        printf("GOOD\n");
    }
    else{
        printf("ERROR\n");
    }
    return 0;
}
