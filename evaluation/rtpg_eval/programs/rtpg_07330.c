#include <stdlib.h>
int __arr_7330[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 47;
    int v2 = 44;
    int v3 = 64;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_7330[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v3 = v3 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
