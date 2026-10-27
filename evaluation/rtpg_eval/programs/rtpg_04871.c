#include <stdlib.h>
int __arr_4871[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 65;
    int v2 = 87;
    int v3 = 45;
    int v4 = 57;
    int v5 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_4871[i] = v1 + i; }
    if (v1 > v3) { v1 = v3; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
