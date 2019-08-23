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
    d += x;
    while (d >= days(y, m)) {
            d -= days(y, m);
        if (m < 12) {
            m++;
        } else {
            m = 1;
            y++;
            
        }
    }
    cout << y << " " << m << " " << d << endl;
}

int main() {
    int y, m, d, x;
    cin >> x;
    cin >> y >> m >> d;
    
    do_cout(y, m, d, x);
    
    return 0;
}
