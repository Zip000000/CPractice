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
    char a, b;
    cin >> a >> b;
    int ming;
    switch(a) {
        case 'O' : 
        if(b == 'O') ming = 0;
        if(b == 'Y') ming = 1;
        if(b == 'H') ming = -1;
        break;
        case 'Y' : 
        if(b == 'O') ming = -1;
        if(b == 'Y') ming = 0;
        if(b == 'H') ming = 1;
        break;
        case 'H' : 
        if(b == 'O') ming = 1;
        if(b == 'Y') ming = -1;
        if(b == 'H') ming = 0;
        break;
    }
    if(ming == 1) {
        printf("MING\n");
    } else if(ming == -1) {
        printf("LI\n");
    } else {
        printf("TIE\n");
    }
    
    return 0;
}
