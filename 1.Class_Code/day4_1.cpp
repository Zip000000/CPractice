/*************************************************************************
	> File Name: day4_1.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月22日 星期一 18时37分24秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int ex_gcd(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1, *y = 0;
        return a;
    }
    int r = ex_gcd(b, a % b, y, x);
    *y = *y - *x * (a / b);
    return r;
}

int main() {
    int n, m, x, y;
    while (~scanf("%d%d", &n, &m)) {
        ex_gcd(n, m, &x, &y);
        printf("%d * %d + %d * %d = %d\n", n, x, m, y, n * x + m * y);
    }
    return 0;
}
