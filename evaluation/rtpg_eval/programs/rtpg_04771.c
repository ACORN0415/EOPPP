#include <stdlib.h>
int __arr_4771[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 40;
    int v2 = 83;
    int v3 = 72;
    int i;
    v1 = v1 + v3;
    for (i = 0; i < 10; i++) { __arr_4771[i] = v3 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
