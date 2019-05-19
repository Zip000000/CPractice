/*************************************************************************
	> File Name: htest.h
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月18日 星期六 20时02分45秒
 ************************************************************************/

#ifndef _HTEST_H
#define _HTEST_H

#include <stdio.h>
#include <stdlib.h>

typedef void (*FuncType)();

typedef struct FuncData {
    FuncType func;
    const char *name_part1;
    const char *name_part2;
    struct FuncData *next;
} FuncData, *pFuncData;

static pFuncData head = NULL;

#define __FuncName(a, b) a##b
#define FuncName(a, b) __FuncName(a, b)
#define STR(a) #a


#define TEST(a, b) \
void FuncName(a, FuncName(_, FuncName(b, FuncName(_, Test))))(); \
__attribute__((constructor)) void FuncName(add_Test, __COUNTER__)() { \
    pFuncData p = (pFuncData)malloc(sizeof(FuncData)); \
    p->func = FuncName(a, FuncName(_, FuncName(b, FuncName(_, Test)))); \
    p->name_part1 = STR(a); \
    p->name_part2 = STR(b); \
    p->next = head; \
    head = p; \
    TestNum++; \
} \
void FuncName(a, FuncName(_, FuncName(b, FuncName(_, Test))))()

#define EXPECT(a,b,c) \
        if(a c b) { \
            add_right(); \
        } else { \
            printf("%s ","\033[33m[    WRONG ]\033[0m"); \
            printf("%s = %s 输出结果：%d 正确结果：%d\n", #a, #b, a, b); \
            add_wrong(); \
           }

#define EXPECT_EQ(a, b)  EXPECT(a, b, ==)

        /*
        if(a != b) { \
            printf("%s ","\033[33m[    WRONG ]\033[0m"); \
            printf("%s = %s 输出结果：%d 正确结果：%d\n", #a, #b, a, b); \
            add_wrong(); \
           } else { \
            add_right(); \
           } \
*/
#define EXPECT_NE(a, b) EXPECT(a, b, !=)
#define EXPECT_GT(a, b) EXPECT(a, b, >)
#define EXPECT_LT(a, b) EXPECT(a, b, <)
#define EXPECT_LE(a, b) EXPECT(a, b, <=)
#define EXPECT_GE(a, b) EXPECT(a, b, >=)
static double allnum=0;
static double wrongnum=0;
static int TestNum=0;

typedef struct info {
    float rightnum;
    float wrongnum;
}Info;
static Info info;
void clear () {
    info.rightnum = 0;
    info.wrongnum = 0;
}
void add_right() {
    info.rightnum++;
}
void add_wrong() {
    info.wrongnum++;
}
#define COLOR(a,b) 

int RUN_ALL_TESTS() {
    clear();
    pFuncData p = head;
        printf("[==========]\033[44;37m RUNNING %d TESTS, TEST START!\033[0m\n", TestNum);
    while (p != NULL) {
        clear();
        printf("\033[32m[----------]\033[0m %s.%s\n", p->name_part1, p->name_part2);
        printf("\033[32m[ RUN      ]\033[0m %s.%s\n", p->name_part1, p->name_part2);
        p->func();
        if(info.wrongnum==0 && info.rightnum!=0) printf("\033[32m[       OK ]\033[0m %s.%s\n", p->name_part1, p->name_part2);
        else printf("\033[1;31m[  FAILED  ]\033[0m %s.%s\n", p->name_part1, p->name_part2);
        float score = 100.0 * (info.rightnum / (info.rightnum+info.wrongnum));
        if(score != 100) printf("\033[31m[  %.2f%%  ]\033[0m\n", score);
        printf("\033[32m[----------]\033[0m %s.%s\n\n", p->name_part1, p->name_part2);
        p = p->next;
    }
    return 0;
}


#endif
