/*************************************************************************
	> File Name: 6day2.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月04日 星期六 15时19分15秒
 ************************************************************************/

#include<stdio.h>

int binary_search(int *arr, int n, int x) {
    int head = 0, tail = n-1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x) head = mid + 1;
        else tail = mid -1;
    }
    return -1;
}



int main() {


    return 0;
}
