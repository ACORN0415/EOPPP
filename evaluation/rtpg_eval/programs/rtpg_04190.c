#include <stdlib.h>
int __arr_4190[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 13;
    int v2 = 74;
    int v3 = 100;
    int v4 = 96;
    int i;
    for (i = 0; i < 10; i++) { __arr_4190[i] = v0 + i; }
    v4 = 57;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
