/*************************************************************************
	> File Name: 467.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月15日 星期四 10时31分14秒
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

long long ans(long long n) {
    if (n == 1) return 1;
    return n * (ans(n-1));
}

int main() {
    long long n;
    cin >> n;

    cout << ans(n) << endl;
    return 0;
}
