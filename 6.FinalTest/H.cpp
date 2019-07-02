/*************************************************************************
	> File Name: H.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月02日 星期二 18时55分35秒
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
#define MAX 100005
int prime[MAX + 5];
int main() {
    int n;
    cin >> n;
    
    for(int i = 2; i <= MAX; i++) {
        if(prime[i] == 0) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++) {
            if(i * prime[j] > MAX) break;
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }

    for(int i = 1; ; i++) {
        if(i != 1) printf(" ");
        if(prime[i] > n) break;
        printf("%d", prime[i]);
    }
    printf("\n");
    
    return 0;
}
