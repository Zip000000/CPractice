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
    double a, b;
    cin >> a;
    
    if(a < 15) {
        printf("%.2f\n", a*6);
    } else {
    printf("%.2f\n", 15*6+(a-15)*9);
    }

    return 0;
}
