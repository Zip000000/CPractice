/*************************************************************************
	> File Name: G.HZ.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年06月30日 星期日 16时50分03秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define Plog(frm, arg...) 

void haizei_test() {
    int a = 6;
    Plog("%d", MAX(2, 3));
    Plog("%d", 5 + MAX(2, 3));
    Plog("%d", MAX(2, MAX(3, 4)));
    Plog("%d", MAX(2, 3 > 4 ? 3 : 4));
    Plog("%d", MAX(a++, 6));
    Plog("a value = %d", a);
}

int main() {
    haizei_test();
    return 0;
}



