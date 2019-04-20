/*************************************************************************
	> File Name: test_day3_2.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月20日 星期六 15时40分51秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    while(~scanf("%d",&n)){
        if(n==0){
            break;
        }
        switch(n){
            case 1: printf("one "); 
            case 2: printf("two "); 
            case 3: printf("three\n"); break; 
            default: printf("error\n"); 
        }
    }
    return 0;
}
