/*************************************************************************
	> File Name: test.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月01日 星期三 20时40分58秒
 ************************************************************************/
#include <iostream>
using namespace std;
int binary_search(int target, int *num, int len) {
    int left = 0;
    int right = len - 1;
    int mid;
    while (left <= right) {
        mid = (left + right) >> 1 ;
        if(num[mid] == target) return mid;  
        if(num[mid] > target) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}
int main() {
	int num[1000000];
	int n, m;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> num[i];
	}
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int value;
		cin >> value;
		cout << binary_search(value, num, n) << endl;
	}
	return 0;
}
