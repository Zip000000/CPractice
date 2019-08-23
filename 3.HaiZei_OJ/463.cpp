/*************************************************************************
	> File Name: 463.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月22日 星期四 10时26分08秒
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
    int a[4], b[4];
    for (int i = 0; i < 4; i++) cin >> a[i];
    for (int i = 0; i < 4; i++) cin >> b[i];
    int flag = 0;
    for (int i = 0; i < 4; i++) {
        if (a[i] > b[0] && a[i] < b[1] && a[i] > b[2] && a[i] < b[3]) flag = 1;
        if (b[i] > a[0] && b[i] < a[1] && b[i] > a[2] && b[i] < a[3]) flag = 1;
    }
    
    
    
    
    return 0;
}
