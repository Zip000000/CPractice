/*************************************************************************
	> File Name: test.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月01日 星期三 20时40分58秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>

int main() {
    char str[26] = "abcdefghijklmnopqrstuvwxyz";
    char* ptr;
    for(ptr = str; *ptr; ptr++) {
        printf("str = %p\n", str); 
        printf("ptr = %p\n", ptr); 

        printf("%c\n",*ptr);
    }




    
    return 0;
}



