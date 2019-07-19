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
    long long b;
    cin >> a >> b;
    if(a == b) {
        printf("100\n");
    } else if(a/10 == b % 10 && a % 10 == b / 10) {
        printf("20\n");
    } else if(a/10 == b % 10 || a / 10 == b / 10 || a%10 == b/10 || a%10 == b%10) {
        printf("2\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}
