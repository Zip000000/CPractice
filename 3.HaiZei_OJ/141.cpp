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
    int size = 2 * n + 1;
    for (int i = n; i >= 1; i--) {
        char ch = 'A';
        int num = i * 2 + 1;
        int space = (size - num) / 2;
        for (int i = 0; i < space; i++, ch++) {
            printf(" ");
        }
        for (int i = 0; i < num / 2; i++) {
            printf("%c", ch);
            ch++;
        }
        printf("%c", ch);
        ch--;
        for (int  i = num / 2; i > 0; i--) {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
    for (int i = 0; i <= n; i++) {
        char ch = 'A';
        int num = i * 2 + 1;
        int space = (size - num) / 2;
        for (int i = 0; i < space; i++, ch++) {
            printf(" ");
        }
        for (int i = 0; i < num / 2; i++) {
            printf("%c", ch);
            ch++;
        }
        printf("%c", ch);
        ch--;
        for (int  i = num / 2; i > 0; i--) {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}
