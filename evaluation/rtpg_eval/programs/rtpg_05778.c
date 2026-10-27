#include <stdlib.h>
int __arr_5778[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 87;
    int v2 = 7;
    int v3 = 57;
    int v4 = 55;
    int i;
    v3 = v3 - v1;
    for (i = 0; i < 10; i++) { __arr_5778[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
