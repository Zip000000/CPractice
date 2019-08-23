/*************************************************************************
	> File Name: 468.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月15日 星期四 10时18分09秒
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

int gcd(int a, int b) {
    if (a < b) return gcd(b, a);
    return (b ? gcd(b, a%b) : a);
}

int main() {
    int m, n;
    cin >> m >> n;
    
    cout << gcd(m, n) << endl;
    
    
    return 0;
}
