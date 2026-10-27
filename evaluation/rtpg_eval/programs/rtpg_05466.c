#include <stdlib.h>
int __arr_5466[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 5;
    int v2 = 24;
    int i;
    v0 = v0 + v0;
    for (i = 0; i < 10; i++) { __arr_5466[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
