/*************************************************************************
	> File Name: 127.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月14日 星期三 14时34分10秒
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
    int x, n;
    cin >> x >> n;

    int ans = x * pow(1.06, n);
    
    cout << ans << endl;
    
    return 0;
}
