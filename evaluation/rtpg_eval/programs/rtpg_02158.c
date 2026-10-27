#include <stdlib.h>
int __arr_2158[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 15;
    int v2 = 69;
    int i;
    v1 = v1 * 7;
    for (i = 0; i < 10; i++) { __arr_2158[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
