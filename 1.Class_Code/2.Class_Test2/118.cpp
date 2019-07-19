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
    long long a;
    cin >> a;
    
    int n = a - 1900;
    
    switch(n % 12) {
        case 0: printf("rat\n"); break;
        case 1: printf("ox\n"); break;
        case 2: printf("tiger\n"); break;
        case 3: printf("rabbit\n"); break;
        case 4: printf("dragon\n"); break;
        case 5: printf("snake\n"); break;
        case 6: printf("horse\n"); break;
        case 7: printf("sheep\n"); break;
        case 8: printf("monkey\n"); break;
        case 9: printf("rooster\n"); break;
        case 10: printf("dog\n"); break;
        case 11: printf("pig\n"); break;
    }
    
    return 0;
}
