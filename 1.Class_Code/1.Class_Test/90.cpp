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
    int n = 3;
    int ans[3];
    while(n--) {
        ans[n] = a%10;
        a /= 10;
    }
    for(int i = 0; i < 3; i++) printf("%d\n", ans[i]);
    return 0;
}
