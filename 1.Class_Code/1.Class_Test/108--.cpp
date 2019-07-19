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
    char r;
    cin >> r;
    double a, b;
    cin >> a >> b;
    if(r == 'r') printf("%.2f\n", a*b);
    if(r == 't') printf("%.2f\n", a*b/2);

    return 0;
}
