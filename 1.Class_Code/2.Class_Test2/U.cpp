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
    long long n;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            i==j || printf("\t");
            printf("%d*%d=%d", i, j, i*j);
        }
        printf("\n");
    }
    
    return 0;
}
