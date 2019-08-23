/*************************************************************************
	> File Name: 142.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月14日 星期三 15时36分27秒
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

int is_hui(int n) {
    int tmp = 0;
    while  (tmp < n) {
        tmp *= 10;
        tmp += n % 10;
        n /= 10;
    }
    if (tmp > n) tmp /= 10;
    return (tmp == n);
}

int main() {
    int a, b;
    cin >> a>> b;
    int *prime = (int *)malloc(sizeof(int) * (b + 5));
    int *is_prime = (int *)malloc(sizeof(int) * (b + 5));
    memset(prime, 0, sizeof(prime));
    memset(prime, 0, sizeof(is_prime));
    for (int M = 2; M <= b; M++) {
        if (is_prime[M] == 0) prime[++prime[0]] = M;

        for (int j  = 1; j <=prime[0]; j++) {
            if (prime[j] * M > b) break;
            is_prime[prime[j] * M] = 1;
            if (M % prime[j] == 0) break;
        }
    }
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (!is_prime[i] && is_hui(i)) {
            if (cnt != 0) printf(" ");
            printf("%d", i);
            cnt++;
        }
    }
    printf("\n");
    return 0;
}
