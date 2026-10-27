#include <stdlib.h>
int __arr_1368[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 1;
    int v2 = 67;
    int v3 = 72;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_1368[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
