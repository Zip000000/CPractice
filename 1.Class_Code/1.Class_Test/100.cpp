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

    double a;
    cin >> a;
    double ans = 0;
    
    for(int i = 0; i < 6; i++) {
        ans = (a + ans)*(1 + 0.00417);
    }
    printf("$%.2f\n", ans);

    return 0;
}
