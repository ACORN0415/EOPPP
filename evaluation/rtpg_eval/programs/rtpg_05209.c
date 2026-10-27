#include <stdlib.h>
int __arr_5209[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 6;
    int v2 = 67;
    int i;
    for (i = 0; i < 10; i++) { __arr_5209[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
