/*************************************************************************
	> File Name: 113.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月14日 星期三 12时07分15秒
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

int is_run(int y) {
    return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
}

int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int y, m;
    cin >> y >> m;

    if (m == 2 && is_run(y)) {
        cout << d[m] + 1 << endl;
    } else {
        cout << d[m] << endl;
    }
    
    return 0;
}
