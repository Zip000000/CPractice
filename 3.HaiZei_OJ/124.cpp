/*************************************************************************
	> File Name: 124.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月14日 星期三 14时08分33秒
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool flag = (a >= 1 || b <= 50) && (c <= 25 || d >= 5);
    if (flag) cout << "ok" << endl; else cout << "pass" << endl;
    
    
    return 0;
}
