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
    double ans = 0;
    for(int i = 0; i < a; i++) {
        long long tmp;
        cin >> tmp;
        ans += tmp;
    }
    printf("%.2lf\n", ans / a);


    
    return 0;
}
