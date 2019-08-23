/*************************************************************************
	> File Name: 139.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月14日 星期三 14时59分39秒
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
int main() {
    int n;
    cin >> n;
    int size = 2 * n - 1;
    char ch = 'A';
    for (int i = 1; i <= n; i++, ch++) {
        int num = i * 2 - 1;
        int space = (size - num) / 2;
        for (int i = 0; i < space; i++) {
            printf(" ");
        }
        for (int i = 0; i < num; i++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    ch--;
    for (int  i = n - 1; i >= 1; i--) {
        ch--;
        int num = i * 2 - 1;
        int space = (size - num) / 2;
        for (int i = 0; i < space; i++) {
            printf(" ");
        }
        for (int i = 0; i < num; i++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
