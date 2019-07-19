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
int mon[13]={-1,1,2,1,0,1,0,1,1,0,1,0,1};

int is_run(long long y) {
    return (y % 100 != 0 && y %4 == 0 || y % 100 == 0 && y % 400 == 0);
}

int main() {
    long long y, m, d;
    cin >> y >> m >> d;
    
    if(y <= 0 || m <= 0 || m > 12 || d <= 0 || d > 31) {printf("NO\n"); return 0;}
    
    if(mon[m] == 0) {
        if(d > 30) {
            printf("NO\n"); 
            return 0;
        }
    } else if(mon[m] == 2) {
        if(is_run(y)) {
            if(d > 29) {
                printf("NO\n"); 
                return 0;
            }
        } else {
            if(d > 28) {
                printf("NO\n"); 
                return 0;
            }
        }
    }

                printf("YES\n"); 
    
    return 0;
}
