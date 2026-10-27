#include <stdlib.h>
int __arr_1030[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 86;
    int v2 = 30;
    int v3 = 94;
    int v4 = 58;
    int v5 = 46;
    int v6 = 72;
    int i;
    v2 = v2 - v0;
    v6 = 62;
    for (i = 0; i < 10; i++) { __arr_1030[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    int *__p = &v3;
    *__p = *__p + 1;
    v4 = v4 | v2;
    return v0;
}
int main(void) { return test_func(); }
