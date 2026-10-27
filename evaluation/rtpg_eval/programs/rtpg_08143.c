#include <stdlib.h>
int __arr_8143[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 48;
    int v2 = 36;
    int v3 = 65;
    int v4 = 79;
    int v5 = 62;
    int v6 = 4;
    int v7 = 8;
    int i;
    for (i = 0; i < 10; i++) { __arr_8143[i] = v7 + i; }
    if (v5 > v3) { v5 = v3; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
