#include <stdlib.h>
int __arr_2154[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 69;
    int v2 = 95;
    int v3 = 59;
    int v4 = 78;
    int i;
    for (i = 0; i < 10; i++) { __arr_2154[i] = v4 + i; }
    for (i = 0; i < 12; i++) {
        v2 = v2 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
