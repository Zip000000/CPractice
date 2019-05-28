/*************************************************************************
	> File Name: ip.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月12日 星期日 14时21分37秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>

typedef struct ipv4{
    int ip[4];
} ipv4;

struct ipv4* get_and(struct ipv4* m, struct ipv4* n, struct ipv4* ans) {
    ans->ip[0] = (m->ip[0] & n->ip[0]);
    ans->ip[1] = (m->ip[1] & n->ip[1]);
    ans->ip[2] = (m->ip[2] & n->ip[2]);
    ans->ip[3] = (m->ip[3] & n->ip[3]);
    return ans;
}
int check(struct ipv4* a, struct ipv4* b) {
    int result = 0;
    for(int i = 0; i < 4; i++) {
        if((a->ip[i]) != (b->ip[i])) result--;
    }
    return result;
}
void qufan(struct ipv4* x) {
    for(int i =0; i < 4; i++) {
        (x->ip[i]) = ~(x->ip[i]);
    }

}
int main(int argc, char* argv[]) {
    
    struct ipv4 a;
    struct ipv4 b;
    struct ipv4 x; 
    sscanf(argv[1],"%d.%d.%d.%d", &a.ip[0], &a.ip[1], &a.ip[2], &a.ip[3]);
    sscanf(argv[2],"%d.%d.%d.%d", &b.ip[0], &b.ip[1], &b.ip[2], &b.ip[3]);
    sscanf(argv[3],"%d.%d.%d.%d", &x.ip[0], &x.ip[1], &x.ip[2], &x.ip[3]);
    //qufan(&x);

    struct ipv4* ans1 = (struct ipv4*)malloc(sizeof(struct ipv4));
    struct ipv4* ans2 = (struct ipv4*)malloc(sizeof(struct ipv4));
    ans1 = get_and(&a, &x, ans1);
    ans2 = get_and(&b, &x, ans2);
    
    
    /*for(int i = 0; i < 4; i++) {
        printf("%d.", ans1->ip[i]);
    }
    printf("\n");
    for(int i = 0; i < 4; i++) {
        printf("%d.", ans2->ip[i]);
    }*/
    
    
    int result = check(ans1, ans2);
    //printf("result = %d\n", result);
    if(result < 0) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    
    
    return 0;
}
