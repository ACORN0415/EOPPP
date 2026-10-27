#include <stdlib.h>
int __arr_4083[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 5;
    int v2 = 52;
    int v3 = 49;
    int v4 = 7;
    int v5 = 86;
    int i;
    v5 = v5 * 3;
    for (i = 0; i < 10; i++) { __arr_4083[i] = v5 + i; }
    v4 = v4 + v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
