/*************************************************************************
	> File Name: A.run.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月01日 星期一 09时47分32秒
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
    int y;
    scanf("%d", &y);
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
        printf("L\n");
        return 0;
    }
    printf("N\n");
    return 0;
}
