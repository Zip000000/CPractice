/*************************************************************************
	> File Name: 86.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月19日 星期五 18时05分13秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

int main() {
    double a, b, c, t;
    cin >> a >> b >> c >> t;
    double ans = 0;
    double tmp = ((1000/a) + (1000/b) - (1000/c));
    double tmp2 = (1000 - (1000/a+1000/b)*t);
    ans = t + tmp2 / tmp;
    printf("%.2f\n", ans);

    return 0;
}
