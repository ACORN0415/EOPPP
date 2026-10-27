#include <stdlib.h>
int __arr_4024[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 44;
    int v2 = 0;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 10; i++) { __arr_4024[i] = v0 + i; }
    if (v2 > v0) { v2 = v0; }
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
