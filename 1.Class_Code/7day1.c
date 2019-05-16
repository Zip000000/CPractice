/*************************************************************************
	> File Name: 7day1.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月16日 星期四 18时56分20秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
int main() {
    int a[4] = {0};
    scanf("%d.%d.%d.%d", a, a + 1, a + 2, a + 3);
    long long ans = 0;
    ans = a[0]*pow(256, 3) + a[1] * pow(256, 2) + a[2] * pow(256, 1) + a[3];
    printf("ans = %ld\n", ans);
    return 0;
}
