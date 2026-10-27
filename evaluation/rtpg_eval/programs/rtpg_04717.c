#include <stdlib.h>
int __arr_4717[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 42;
    int v2 = 30;
    int v3 = 68;
    int v4 = 98;
    int i;
    v4 = v4 + v2;
    for (i = 0; i < 10; i++) { __arr_4717[i] = v1 + i; }
    v1 = v1 - v4;
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
