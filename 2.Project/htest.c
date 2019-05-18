/*************************************************************************
	> File Name: htest.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月18日 星期六 20时04分03秒
 ************************************************************************/

#include<stdio.h>
#include "htest.h"

int add(int a, int b) {
    return a + b;
}


TEST(test, add) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(10, 20), 30);
    EXPECT_EQ(add(1000, 2000), 3000);
    EXPECT_EQ(add(10000, 20000), 30000);
    EXPECT_EQ(add(10, 200), 30);
}

int main() {
    return RUN_ALL_TESTS();
}
