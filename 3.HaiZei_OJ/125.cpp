/*************************************************************************
	> File Name: 125.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月14日 星期三 14时12分20秒
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

void do_cout(int h, int m, int s, double tt) {
    if (h == 0) {
        cout << h + 12 << ":" << m << ":"  << s << "am" << endl;
    } else if (h == 12) {
        cout << h << ":" << m << ":"  << s << "pm" << endl;
    } else if (h > 12) {
        cout << h - 12 << ":" << m << ":" << s << "pm" << endl;
    } else {
        cout << h << ":" << m << ":" << s << "am" << endl;
    }
    printf("%.2f%%\n",100 * tt / 24 / 3600);
}

int main() {
    int h, m, s, t;
    cin >> h >> m >> s >> t;
    double tt = t;
    s += t;
    m += s / 60;
    s %= 60;
    h += m / 60;
    m %= 60;
    h %= 24;

    do_cout(h, m, s, tt);
    return 0;
}
