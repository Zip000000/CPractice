/*************************************************************************
	> File Name: 7.funcpointer.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月20日 星期四 19时38分09秒
 ************************************************************************/

#include<stdio.h>

int print(int a) {
    printf("hello %d\n", a);
}

int dodo(int(*func)(int)) {
    func(2);
}


int main() {
    dodo(print);

    
    
    return 0;
}
