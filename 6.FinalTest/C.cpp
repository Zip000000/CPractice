/*************************************************************************
	> File Name: C.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年07月02日 星期二 20时01分51秒
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
int get_ans(int n) {
    if(n <= 9) return n;
    int wei = 1;
    int tmp_n = n;
    int level = -1;
    int base = 0;
    while(tmp_n > 0) {
        level++;
        base = (int)pow(10, level);
        tmp_n -= 9 * base;
    }
    tmp_n += 9 * base;
    wei = level + 1;

    int cnt = 1;
    while(tmp_n - wei > 0) {
        cnt++;
        tmp_n -= wei;
    }
    int target = (int)pow(10, level);
    for(int i = 1; i < cnt; i++) {
        target++;
    }
    //答案是 target 的 第tmp_n 位；
    char ansstr[1000000];
    sprintf(ansstr, "%d", target);
    int result = ansstr[tmp_n - 1] - '0';
    return result;
}
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int ans = 1;   //!1
    int a = get_ans(x);
    int b = get_ans(y);
    int c = get_ans(z);
    ans = a * b * c;
    cout << ans << endl;
    
    return 0;
}
