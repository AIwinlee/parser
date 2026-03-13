// main.c
#include "parser.h"
#include <stdio.h>

int main() {
    const char *file = "tmpfile";
    int res = parse_file(file);
    printf("File size: %d bytes\n", res);

    // 段错误代码（用于GDB实验）
    int *p = NULL;
    *p = 42;  // 空指针访问，触发Segmentation Fault
    return 0;
}
