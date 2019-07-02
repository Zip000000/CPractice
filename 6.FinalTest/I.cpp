/*************************************************************************
	> File Name: I.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月02日 星期二 19时01分20秒
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
    int a[3];
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    scanf("%d", &a[2]);
    sort(a, a + 3);
    if(a[0] + a[1] <= a[2]) {
        printf("illegal triangle\n");
        return 0;
    } 
    int judge = (a[0] * a[0] + a[1] * a[1] - a[2] * a[2]);
    if(judge > 0) printf("acute triangle\n");
    else if(judge == 0) printf("right triangle\n");
    else printf("obtuse triangle\n");
    return 0;
}
