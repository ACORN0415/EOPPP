#include <stdlib.h>
int __arr_1114[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 89;
    int v2 = 22;
    int v3 = 72;
    int v4 = 63;
    int i;
    for (i = 0; i < 10; i++) { __arr_1114[i] = v0 + i; }
    for (i = 0; i < 11; i++) {
        v3 = v3 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
