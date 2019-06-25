/*************************************************************************
	> File Name: 204.print.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月13日 星期四 20时14分45秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;

#define MAX 729
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

void print(int n) {
        output(n, 0, 0);
        for (int i = 0; i < pow(3, n-1); i++) {
            for (int j = 0; j < pow(3, n-1); j++) {
                if( ans[i][j] == 'X') {
                    cout<<"X";
                }
                else {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        cout <<"-"<<endl;

}

int main() {
    int n[100];
    int temp = 0;
    while(cin >> n[temp]) {
        if (n[temp] == -1) break;
        temp++;
    }

    for (int j = 0; j < temp; j++) {
        print(n[j]);
    }
    
    return 0;
}
