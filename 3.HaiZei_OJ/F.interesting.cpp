/*************************************************************************
	> File Name: F.interesting.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月01日 星期一 10时15分42秒
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
#define MAX 1000000
char str[MAX + 100];



int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int maxnum = max(x, y);
    maxnum = max(maxnum, z);
    char *tmp_str = str;    
    int cnt = 0;
    for(int i = 1;; i++) {
        if(strlen(str) >= maxnum + 5) break;
        //printf("strlen = %lu\n", strlen(str));
        //tmp_str = add(tmp_str, i);
        int tmpnum = sprintf(tmp_str, "%d", i);
        tmp_str =  tmp_str + tmpnum;
        cnt += tmpnum;
    }
    int ans = 1;
    ans *= (str[x - 1] - '0');
    ans *= (str[y - 1] - '0');
    ans *= (str[z - 1] - '0');

    printf("%d", ans);


    
    
    return 0;
}
