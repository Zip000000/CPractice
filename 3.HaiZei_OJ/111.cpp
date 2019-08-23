/*************************************************************************
	> File Name: 97.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月14日 星期三 12时02分36秒
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
    double n;
    cin >> n;
    double ans = 0;
    if (n <= 3) ans = 13 + 1;
    else {
        ans = 13 + (n - 3) * 2.3 + 1;
    }
    cout << ans << endl;
    
    return 0;
}
