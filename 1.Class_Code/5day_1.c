/*************************************************************************
	> File Name: 5day_1.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月30日 星期二 18时28分56秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>

int output_dnum() {

}

int output_d(int x) {
    #define BASE 100000
    #define BASE_D 5
    unsigned int temp = (x >= 0 ? x : -x);
    int digit = floor(log10(temp)) + 1;
    int p1 =x / BASE, p2 = x % BASE;
    if(digit <= 5) {
        output_dnum(p2, -1);
    } else {
        output_dnum(p1, -1);
        if(p2 < 0) p2 = -p2;
        output_dnum(p2, BASE_D);
    }
    #undef BASE
    return 0;



}

int my_printf(const char *str, ...) {
    va_list args;
    va_start(args, str);
}



int main() {
    




    return 0;

}
