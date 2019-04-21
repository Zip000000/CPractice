/*************************************************************************
	> File Name: test.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年04月20日 星期六 15时17分52秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define ERROR 0
#define OK 1

typedef struct Vector {
    int length,size;
    int* data;
} Vector;

void init(Vector* vector,int _size) {
    vector->size = _size;
    vector->length = 0;
    vector->data = (int* )malloc(sizeof(int)*_size);
}

void expand(Vector* vector) {  //2倍
	int* old_data = vector->data;
    vector->size *= 2;
    vector->data = (int* ) malloc(sizeof(int) * vector->size);
    for(int i=0; i<vector->length; i++)
    {
        vector->data[i] = old_data[i];
    }
    free(old_data);
}

void insert(Vector* vector,int loc,int value) {
    printf("进入insert\n");
    if(loc > vector->length)
    {
        printf("failed\n");
        return;
    }
    
    if(vector->length >= vector->size)
    {
        printf("expand\n");
        expand(vector);
        printf("expand successful!\n");
    }
    
    for(int i=vector->length;i>loc;i--)
    {
        vector->data[i] = vector->data[i-1]; 
    }
	vector->data[loc]=value;
    vector->length++;
    printf("success\n");
}


void clear(Vector* vector) {
	free(vector->data);
	free(vector);
}

int main() {
    Vector *a = (Vector *)malloc(sizeof(Vector));
    init(a, 5);
    int n;
    scanf("%d",&n);
    int p,q;
    for(int i=0;i<n;i++) {
        scanf("%d%d", &p, &q);
        printf("输入成功%d\n", i);
        insert(a, p, q);
        printf("size=%d length=%d \n", a->size, a->length);
    }
    

    return 0;
}
