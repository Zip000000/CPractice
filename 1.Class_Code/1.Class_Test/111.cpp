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
    float a, b;
    cin >> a;
    float ans = 0;
    if(a < 3) {
        ans = 13+1;
    } else {
        ans = 1+13+(a-3)*2.3;
    }
    printf("%f\n", ans);

    return 0;
}
