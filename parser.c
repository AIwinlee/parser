// parser.c
#include "parser.h"
#include <stdio.h>

int parse_file(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) return -1;
    // 简单解析：统计字符数
    int cnt = 0;
    while (fgetc(fp) != EOF) cnt++;
    fclose(fp);
    return cnt;
}

// 新增的行统计函数
int count_lines(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) return -1;
    int lines = 0;
    char buf[256];
    while (fgets(buf, sizeof(buf), fp)) {
        lines++;  // 每读取一行，lines加1
    }
    fclose(fp);
    return lines;
}
