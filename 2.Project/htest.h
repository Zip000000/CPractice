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
#include <assert.h>

typedef void (*FuncType)();

typedef struct FuncData {
    FuncType func;
    const char *name_part1;
    const char *name_part2;
    struct FuncData *next;
} FuncData, *pFuncData;

static FuncData head;
static pFuncData tail = &head;

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
    tail->next = p; \
    tail = p; \
    TestNum++; \
} \
void FuncName(a, FuncName(_, FuncName(b, FuncName(_, Test))))()

#define EXPECT(a,b,c) {\
        __typeof(a) __temp_a = a, __temp_b = b; \
        if(__temp_a c __temp_b) { \
            add_right(); \
        } else { \
            add_wrong(); \
            printf("%s ",YELLOW("[    WRONG ]")); \
            printf("%s = %s 输出结果：%d 正确结果：%d\n", #a, #b, __temp_a, __temp_b); \
           } }

/*
            add_failed(__FILE__, __LINE__, "expect " #a " " #c " " #b); \
                printf(YELLOW(" actual : ")); \
*/

#define EXPECT_EQ(a, b) EXPECT(a, b, ==)
#define EXPECT_NE(a, b) EXPECT(a, b, ==)
#define EXPECT_GT(a, b) EXPECT(a, b, >)
#define EXPECT_LT(a, b) EXPECT(a, b, <)
#define EXPECT_LE(a, b) EXPECT(a, b, <=)
#define EXPECT_GE(a, b) EXPECT(a, b, >=)

#define COLOR(a,b) "\033[" #b "m" a "\033[0m"
#define RED(a) COLOR(a, 31)
#define GREEN(a) COLOR(a, 32)
#define YELLOW(a) COLOR(a, 33)
#define BLUE(a) COLOR(a, 34)
#define PURPLE(a) COLOR(a, 35)
#define DEEPGREEN(a) COLOR(a, 36)
#define COLOR_DIY(a, b) COLOR(a, b)        //color(haha, 1;31)

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

int RUN_ALL_TESTS() {
    clear();
    pFuncData p = head.next;
        printf("[==========]" COLOR_DIY( " RUNNING %d TESTS, TEST START!", 44;37) "\n", TestNum);
    while (p != NULL) {
        clear();
        printf(GREEN("[----------]")" %s.%s\n", p->name_part1, p->name_part2);
        printf(GREEN("[ RUN      ]")" %s.%s\n", p->name_part1, p->name_part2);
        p->func();
        if(info.wrongnum==0 && info.rightnum!=0) printf(GREEN("[       OK ]")" %s.%s\n", p->name_part1, p->name_part2);
        else if(info.rightnum == 0) printf("没有测试用例\n");
        else printf(COLOR_DIY("[  FAILED  ]", 1;31)" %s.%s\n", p->name_part1, p->name_part2);
        float score = 100.0 * (info.rightnum / (info.rightnum+info.wrongnum));
        if(score != 100) printf(RED("[  %.2f%%  ]") "\n", score);
        printf(GREEN("[----------]")" %s.%s\n\n", p->name_part1, p->name_part2);
        p = p->next;
    }
    return 0;
}


#endif
