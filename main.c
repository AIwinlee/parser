// main.c
#include "parser.h"
#include <stdio.h>

int main() {
    const char *file = "tmpfile";
    
    // 调用原有的解析功能
    int res = parse_file(file);
    printf("File size: %d bytes\n", res);
    
    // 新增：调用行统计功能
    int lines = count_lines(file);      // 调用新函数
    printf("Line count: %d\n", lines);  // 打印行数
    
    // 段错误代码（用于GDB实验）
    int *p = NULL;
    *p = 42;  // 空指针访问，触发Segmentation Fault
    return 0;
}
