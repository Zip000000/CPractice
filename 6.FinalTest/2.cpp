/*************************************************************************
	> File Name: 2.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月02日 星期二 18时05分40秒
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

int n;
void init(int *fact, int *num, int *ans) {
    fact[0] = num[0] = ans[0] = 1;
    for(int i = 1; i < n; i++) {
        num[i] = 1;
        ans[i] = i + 1;
        fact[i] = fact[i - 1] * i;
    }
} 
void show_ans(int *arr) {
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    int max;
    cin >> n >> max;
    int fact[n], num[n], ans[n];
    init(fact, num, ans);
    int step = max - 1;
    
    for(int i = 0; i < n; i++) {
        int thisfact = fact[n - i - 1];
        if(step >= thisfact) {
            int jump = step / thisfact;
            step %= thisfact;
            while(jump > 0) {
                ans[i]++;
                if(num[ans[i] - 1] == 1) jump--;
            }
        }
        num[ans[i] - 1] = 0;
        for(int r = 1; r <= n; r++) {
            if(num[r - 1] == 0) continue;
            ans[i + 1] = r;    //重置后一位
            break;
        }
    }
    show_ans(ans);
    return 0;
}
