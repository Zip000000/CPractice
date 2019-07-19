/*************************************************************************
	> File Name: 86.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月19日 星期五 18时05分13秒
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
    int a;
    cin >> a;
    int flag = 0;
    while(a) {
        if((a%10)%2 == 0) flag = 1;
        a /= 10;
    }
    if(flag == 1) printf("YES\n");
    else printf("NO\n");

    return 0;
}
