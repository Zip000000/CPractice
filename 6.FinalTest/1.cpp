/*************************************************************************
	> File Name: 1.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月02日 星期二 18时01分56秒
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

#define MAX 500

int mem[MAX + 5];

long long get_ans(int n) {
    int ret;
    if(n <= MAX && mem[n] != 0) return n;  
    if(n == 2 || n == 3) return 1;
    if(n <= 1) return 0;
    ret =  get_ans(n - 2) + get_ans(n - 3);
    if(n < MAX) mem[n] = ret;
    return ret;
}


int main() {
    int n;
    cin >> n;
    long long ans;
    ans = get_ans(n);
    cout << ans << endl;
    
    
    return 0;
}
