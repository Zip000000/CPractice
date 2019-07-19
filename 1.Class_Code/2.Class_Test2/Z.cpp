/*************************************************************************
	> File Name: 0.test.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月19日 星期五 19时50分05秒
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
    long long a;
    cin >> a;
    
    char c = 'A';

    for(int i = a; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            printf("%c%c", c, c);
        }
        printf("\n");
    }
    
    return 0;
}
