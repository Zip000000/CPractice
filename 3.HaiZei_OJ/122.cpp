/*************************************************************************
    > File Name: 122.cpp
    > Author: Zip 
    > Mail: 307110017@qq.com 
    > Created Time: 2019年08月14日 星期三 12时49分09秒
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
    int t;
    cin >> t;

    int h = 0, m = 0, s = 0;
    
    if (t >= 3600) {
        h = t / 3600;
        t -= (3600 * h);
    } 
    
    if (t >= 60) m = t / 60, t -= (m * 60);
    s = t;
    
    if (h >= 12) {
        if (h == 12) printf("%02d:%02d:%02d midnoon\n", h, m, s);
        else printf("%02d:%02d:%02d pm\n", h - 12, m, s);

    } else {
        printf("%02d:%02d:%02d am\n", h, m, s);
        
    }
    
    return 0;
}
