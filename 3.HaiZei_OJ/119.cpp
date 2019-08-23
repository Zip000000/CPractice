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

int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int days(int y, int m) {
    if (m == 2 && is_run(y)) return day[m] + 1; else return day[m];
}
void do_cout(int y, int m, int d, int x) {
    if (x == -1) {
        if (d - 1 < 1) {
            if (m - 1 < 1) {
                y -= 1;
                m = 12;
                d = days(y, m);
            } else {
                m -= 1;
                d = days(y, m);
            }
        } else {
            d -= 1;
        }
    } else {
        if (d + 1 > days(y, m)) {
            if (m + 1 > 12) {
                y += 1;
                m = 1;
                d = 1;
            } else {
                m += 1;
                d = 1;
            }
        } else {
            d += 1;
        }
    }

    cout << y << " " << m << " " << d << endl;
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    
    do_cout(y, m, d, -1);
    do_cout(y, m, d, 1);

    
    return 0;
}
