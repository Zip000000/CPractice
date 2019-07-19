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
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(&a[0], a + 3);
    if(a[0] + a[1] < a[2]) {
        printf("illegal triangle\n");
        return 0;
    } else {
        int flag = (a[0] * a[0] + a[1] * a[1] - a[2] * a[2] );
        if(flag > 0) printf("acute triangle\n");
        if(flag == 0) printf("right triangle\n");
        if(flag < 0) printf("obtuse triangle\n");
    }
    return 0;
}
