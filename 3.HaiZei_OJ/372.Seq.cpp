/*************************************************************************
	> File Name: 372.Seq.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月19日 星期五 17时44分02秒
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
#include <stack>
#define MAX 500000
int a[MAX + 5];
int b[MAX + 5];

int main() {

    stack<int> sa;
    stack<int> sb;
    int n;
    cin >> n;

    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i < n; i++) {
        cin >> b[i];
    }
    sa.push(0);
    sb.push(0);
    for(int i = 1; i <= n; i++) {
        while(!sa.empty() && sa.top() >= a[i]) sa.pop();
        sa.push(a[i]);
        while(!sb.empty() && sb.top() >= b[i]) sb.pop();
        sb.push(b[i]);

        if(sa.top() != sb.top()) {
            cout << i-1 << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}
