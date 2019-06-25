/*************************************************************************
	> File Name: 239.street_example.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月14日 星期五 23时16分00秒
 ************************************************************************/

#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;
ll in() {
    ll k = 0; char c = getchar();
    for (; c < '0' || c > '9'; c = getchar());
    for (; c >= '0' && c <= '9'; c = getchar())
        k = k * 10 + c - 48;
    return k;
}

void get(ll n, ll num, ll &x, ll &y) {
    if (n == 1) {
        if (num == 1)
            x = 1, y = 1;
        else if (num == 2)
            x = 1, y = 2;
        else if (num == 3)
            x = 2, y = 2;
        else
            x = 2, y = 1;
        return;
    }
    ll midb, mida, mid, right = 1LL << (n * 2), xx, yy;
    mid = right >> 1;
    midb = mid >> 1;
    mida = mid + midb;
    if (num <= midb) {
        get(n - 1, num, xx, yy);
        x = yy; y = xx;
    } else if (num <= mid) {
        get(n - 1, num - midb, xx, yy);
        x = xx; y = yy + (1LL << (n - 1));
    } else if (num <= mida) {
        get(n - 1, num - mid, xx, yy);
        x = xx + (1LL << (n - 1)); y = yy + (1LL << (n - 1));
    } else {
        get(n - 1, num - mida, xx, yy);
        x = (1LL << n) + 1 - yy; y = (1LL << (n - 1)) + 1 - xx;
    }
}

double sqr(double x) {return x * x;}

ll T, n, S, D, Sx, Sy, Dx, Dy;

int main() {
    T = in();
    while (T--) {
        n = in(); S = in(); D = in();
        get(n, S, Sx, Sy);// printf("%I64d %I64d ", Sx, Sy);
        get(n, D, Dx, Dy);// printf("%I64d %I64d\n", Dx, Dy);
        printf("%.0lf\n", sqrt(sqr(10.0 * (Sx - Dx)) + sqr(10.0 * (Sy - Dy))));
    }
    return 0;
}
