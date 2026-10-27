#include <stdlib.h>
int __arr_2629[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 67;
    int v2 = 20;
    int v3 = 3;
    int v4 = 24;
    int v5 = 79;
    int v6 = 66;
    int i;
    v3 = v3 * 4;
    for (i = 0; i < 10; i++) { __arr_2629[i] = v6 + i; }
    v5 = v5 + v4;
    v5 = v5 / (v2 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
