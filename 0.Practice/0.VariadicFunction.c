/*************************************************************************
	> File Name: 0.VariadicFunction.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月01日 星期三 17时38分46秒
 ************************************************************************/

#include<stdio.h>
#include <stdarg.h>

int add(int n, ...) {
    va_list arg;
    va_start(arg, n);
    int ret = 0;
    for(int i = 0; i < n; i++) {
        ret += va_arg(arg, int);
    }
    va_end(arg);
    return ret;

}

void printall(int num, ...) {
    va_list arg_n;
    va_start(arg_n, num);
    while(num--) {
        printf("%d\n", va_arg(arg_n, int));
    }
    


}

int main() {
    int ans = add(4, 1, 2, 3, 4);
    printall(5, 9, 7, 5, 3, 1);
    printf("ans = %d\n", ans);
    return 0;
}
