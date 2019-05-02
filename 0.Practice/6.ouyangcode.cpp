/*************************************************************************
	> File Name: 6.ouyangcode.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月02日 星期四 13时09分11秒
 ************************************************************************/

#include <cstdio>
#include <cmath>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d %d", &p, &q);
    printf("%.4lf\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
 int min = -20, max = 20;
    double x = (min + max) / 2.0;
 if(fabs((*func)(p, q, x)) < EPSILON) {
        return x;
    }
    if((*func)(p, q, x) < 0){
        min = x;
    } else {
        max =x;
    }
    bisection(p, q, func);
}

double f(int p, int q, double x) {
    return p * x + q;
}
