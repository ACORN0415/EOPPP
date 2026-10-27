#include <stdlib.h>
int __arr_1815[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 50;
    int v2 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_1815[i] = v0 + i; }
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    v1 = 97;
    v1 = v1 | v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
