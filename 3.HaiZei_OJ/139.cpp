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
    int size = 2 * n;
    for (int  i = 1; i <= n; i++) {
        int num = i * 2;
        int space = (size - num) / 2;
        for (int i = 0; i < space; i++) {
            printf(" ");
        }
        for (int i = 0; i < num; i++) {
            printf("A");
        }
        printf("\n");
    }
    for (int  i = n - 1; i >= 1; i--) {
        int num = i * 2;
        int space = (size - num) / 2;
        for (int i = 0; i < space; i++) {
            printf(" ");
        }
        for (int i = 0; i < num; i++) {
            printf("A");
        }
        printf("\n");
    }
    return 0;
}
