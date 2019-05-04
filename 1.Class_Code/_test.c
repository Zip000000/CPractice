/*************************************************************************
	> File Name: test.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月20日 星期六 15时17分52秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct Vector {
    int length, size;
    int* data;
}Vector;

Vector* Vec_Init(int _size) {
    Vector* vector;
    vector = (Vector* )malloc(sizeof(Vector));
    vector->size = _size;
    vector->length = 0;
    vector->data = (int* )malloc(sizeof(int) * vector->size);
    return vector;
}

void show(Vector* vector) {
    printf("开始输出：\n");
    for(int i = 0; i < vector->length; i++) {
        i == 0 || printf(" ");
        printf("%d", vector->data[i]);
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    Vector* vector;
    vector = Vec_Init(n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &vector->data[i]);
    }
    show(vector);
    return 0;
}
