/*************************************************************************
	> File Name: 130.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月14日 星期三 14时36分40秒
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
    int m, n;
    cin >> m >> n;
    double ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (m + ans) * 1.00417;
    }
    printf("$%.2f\n", ans);
    
    return 0;
}
