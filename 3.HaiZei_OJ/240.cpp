/*************************************************************************
	> File Name: 240.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月15日 星期四 12时38分34秒
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

void print(int n, int num) {
    if (n == 1) {
        cout << "X" ;
    }
    print(n - 1, 2);
    print(n - 1, 1);
    print(n - 1, 2);
}

int main() {
    int n;
    while (cin >> n) {
        if (n == -1) return 0;
        print(n);
        cout << "-" << endl;
    }
    
    
    return 0;
}
