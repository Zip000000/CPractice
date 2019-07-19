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
    long long a, b;
    cin >> a >> b;
    int flag = 0;
    for(long long i = 11; i <= b; i+=11) {
        if(i >=a) {
            if(flag == 1) printf(" ");
            printf("%lld", i);
            flag = 1;
        }
    }
    printf("\n");
    return 0;
}
