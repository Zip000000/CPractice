/*************************************************************************
	> File Name: 117.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月14日 星期三 12时11分33秒
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

int is_ans(int n) {
    int tmp = 0;
    while (tmp < n) {
        tmp *= 10;
        tmp += (n % 10);
        n /= 10;
    }
    if (tmp != n) tmp /= 10;
    return tmp == n;
}

int main() {
    int n; 
    cin >> n;
    

    if (is_ans(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
