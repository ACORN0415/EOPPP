#include <stdlib.h>
int __arr_9439[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 74;
    int v2 = 63;
    int v3 = 0;
    int v4 = 25;
    int v5 = 36;
    int v6 = 34;
    int v7 = 69;
    int i;
    for (i = 0; i < 20; i++) {
        v5 = v5 + v3;
    }
    v5 = v5 * 10;
    for (i = 0; i < 10; i++) { __arr_9439[i] = v4 + i; }
    int *__p = &v5;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
