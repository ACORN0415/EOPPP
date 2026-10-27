#include <stdlib.h>
int __arr_1635[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 45;
    int v2 = 44;
    int v3 = 11;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_1635[i] = v1 + i; }
    v2 = v2 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
