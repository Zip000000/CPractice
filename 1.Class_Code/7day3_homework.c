/*************************************************************************
	> File Name: 7day3_homework.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月18日 星期六 09时47分31秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
void stop() {
    printf("对不起，您没有权限执行本程序！\n");
    exit(1);
}
int main(int argc, char *argv[], char **env) {
    if (strcmp(argv[0], "./haizeix") != 0) stop();
    int judge = 1;
    for(int i = 0; env[i] != NULL; i++) {
        if (strcmp(env[i], "USER=zip") == 0) judge = 0; 
    }
    if (judge == 1) stop();

    printf("恭喜您成功执行本程序！\n");
}
