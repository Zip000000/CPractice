/*************************************************************************
	> File Name: 1.cost.cpp
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月11日 星期二 18时12分27秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int n=5;
    int arr[n]={1,3,2,1,1};
    nth_element(arr, arr + n/2, arr + n);
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    

    
    return 0;
}
