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
    char a;
    cin >> a;
    
    switch(a) {
        case 'h':printf("He\n"); break;
        case 'l':printf("Li\n"); break;
        case 'c':printf("Cao\n"); break;
        case 'd':printf("Duan\n"); break;
        case 'w':printf("Wang\n"); break;
        default:printf("Not Here\n"); break;
    }
    
    return 0;
}
