/*************************************************************************
	> File Name: D.666.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月01日 星期一 09时50分08秒
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

int days_p[] = {0, 
              31, 28, 31, 30,
              31, 30, 31, 31,
              30, 31, 30, 31};
int days_r[] = {0, 
              31, 29, 31, 30,
              31, 30, 31, 31,
              30, 31, 30, 31};
int is_run(int y) {
    return (y % 4 == 0 && y % 100 != 0|| y % 400 == 0);
}

int datecmp(int y1, int m1, int d1, int y2, int m2, int d2) {
    if(y1 < y2) return 0;
    if(y1 > y2) return 1;
    if(y1 == y2) {
        if(m1 < m2) return 0;
        if(m1 > m2) return 1;
        if(m1 == m2) {
            if(d1 > d2) return 1;
            if(d1 < d2) return 0;
            if(d1 == d2) return 1;
        }
    }
}

int main() {
    int s_y, s_m, s_d;
    int f_y, f_m, f_d;
    scanf("%d %d %d",&s_y, &s_m, &s_d);
    scanf("%d %d %d",&f_y, &f_m, &f_d);
    int cnt = -1;
    int ans = 0;
    for(int y = 1900; y <= f_y; y++) {
        for(int m = 1; m <= 12; m++) {
            int *d_num;
            if(is_run(y)) d_num = days_r;
            else d_num = days_p;
            
            for(int d = 1; d <= d_num[m]; d++) {
                cnt++;
                if(datecmp(y, m, d, s_y, s_m, s_d) && datecmp(f_y, f_m, f_d, y, m, d)) {
                
                    //printf("%d %d %d\n", y, m, d);
                    if(m == 6 && d == 6 && cnt % 7 == 5) ans++;
                }
            }
        }
    }
    printf("%d\n", ans);
    
    
    return 0;
}
