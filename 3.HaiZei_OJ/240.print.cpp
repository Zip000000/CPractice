/*************************************************************************
	> File Name: 204.print.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月13日 星期四 20时14分45秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;

#define MAX 800
char ans[MAX +5][MAX +5];

void output(int n, int i, int j) {
    if (n == 1) {
        ans[i][j]='X';
        return;
    }
    int l = (int)pow(3, n-2);

    output(n - 1, i, j);
    output(n - 1, i, j + 2 * l);
    output(n - 1, i +l, j + l);
    output(n - 1, i + 2 * l, j);
    output(n - 1, i + 2 * l, j + 2 * l);
    return ;
}

int main() {
    int n;
    cin >> n;
    if (n == -1) return 0;
    output(n, 0, 0);
    for (int i = 0; i < 3 * n; i++) {
        for (int j = 0; j < 3 * n; j++) {
            if( ans[i][j] == 'X') {
                cout<<"X";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}
