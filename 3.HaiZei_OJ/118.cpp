/*************************************************************************
	> File Name: 118.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年08月14日 星期三 12时17分24秒
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

void do_cout(int n) {
    switch (n) {
        case 0: cout << "rat" << endl; break;
        case 1: cout << "ox" << endl; break;
        case 2: cout << "tiger" << endl; break;
        case 3: cout << "rabbit" << endl; break;
        case 4: cout << "dragon" << endl; break;
        case 5: cout << "snake" << endl; break;
        case 6: cout << "horse" << endl; break;
        case 7: cout << "sheep" << endl; break;
        case 8: cout << "monkey" << endl; break;
        case 9: cout << "rooster" << endl; break;
        case 10: cout << "dog" << endl; break;
        case 11: cout << "pig" << endl; break;
    }
}

int main() {
    int y;
    cin >> y;
    if (y >= 1900) {
        do_cout((y - 1900) % 12);
    } else {
        do_cout(12 - (1900 - y) % 12);

    }
    
    return 0;
}
