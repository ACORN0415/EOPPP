#include <stdlib.h>
int __arr_6387[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 33;
    int v2 = 26;
    int v3 = 27;
    int i;
    for (i = 0; i < 10; i++) { __arr_6387[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
