#include <stdlib.h>
int __arr_5633[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 39;
    int v2 = 92;
    int v3 = 18;
    int v4 = 55;
    int v5 = 42;
    int v6 = 33;
    int i;
    v4 = v4 - v2;
    for (i = 0; i < 10; i++) { __arr_5633[i] = v4 + i; }
    for (i = 0; i < 6; i++) {
        v6 = v6 + v5;
    }
    v1 = v1 % (v4 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
