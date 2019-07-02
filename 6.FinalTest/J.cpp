/*************************************************************************
	> File Name: J.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月02日 星期二 19时15分41秒
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
    char ch[3];
    int cnt = 0;
    while(scanf("%c", &ch[cnt % 3]) != EOF) {
        cnt++;
    }
    printf("cnt = %d\n", cnt);
    int a = ch[(cnt - 2) % 3] - '0';

    if(a & 1) printf("NO\n");
    else printf("YES\n");

    return 0;
}
