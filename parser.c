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
