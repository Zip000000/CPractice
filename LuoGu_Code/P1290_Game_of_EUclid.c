/*************************************************************************
	> File Name: P1290_Game_of_EUclid.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月28日 星期日 19时55分08秒
 ************************************************************************/

#include<stdio.h>

int game(int x, int y, int count) {
    if(x > y) {
        return game(y, x, count);
    }
    count = !count;
    if(x == y || y % x == 0 || y/x >=2) {
        return count;
    } else {      //y=x+z   y不能=z, 因为y>x  因此操作唯一
        return game(y - x, x, count);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    int m, n;
    for(int i = 0; i < t; i++) {
        scanf("%d %d", &m, &n);
        int count = 0; //0--Ollie   1--Stan  进入game函数先变号
        int ans = game(m, n, count);
        ans == 0 ? printf("Ollie wins\n") : printf("Stan wins\n");
    }
    return 0;
}
