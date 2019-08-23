/*************************************************************************
	> File Name: 44.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月15日 星期四 15时03分35秒
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

#define MAX_N 1000000
int num[MAX_N + 5];

int max_list(int n) {
    int max = 0;
    int max_id = 0;
    for (int i = 0; i < n; i++) {
        printf("num[%d] = %d num[%d] = %d\n", i, num[i], n, num[n]);
        int tmp = max_list(i);
        if (tmp > max) {
            max = tmp;
            max_id = i;
        }
    }
    printf("max_id = %d max = %d\n", max_id, max);
    if (num[max_id] <  num[n]) return max + 1;
    else return max;
}
int main() {
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) cin >> num[i];

    cout << max_list(n - 1) << endl;

    return 0;
}
