#include <stdlib.h>
int __arr_7082[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 3;
    int v2 = 9;
    int v3 = 84;
    int v4 = 6;
    int v5 = 93;
    int i;
    for (i = 0; i < 10; i++) { __arr_7082[i] = v4 + i; }
    v4 = v4 + v4;
    v1 = 19;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
