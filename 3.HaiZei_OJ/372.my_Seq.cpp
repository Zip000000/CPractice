
#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX_N 500000
int arr1[MAX_N + 5], arr2[MAX_N + 5];
int sa[MAX_N + 5], top1 = -1;
int sb[MAX_N + 5], top2 = -1;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr2[i]);
    }

    sa[++top1] = 0;
    sb[++top2] = 0;

    for (int i = 1; i <= n; i++) {
        while(arr1[i] <= sa[top1]) top1--;
        sa[++top1] = arr1[i];

        while(arr2[i] <= sb[top2]) top2--;
        sb[++top2] = arr2[i];
        if (top1 != top2) {
            printf("%d\n", i - 1);
            return 0;
        }
    }
    printf("%d\n", n);
    return 0;
}
