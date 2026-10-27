#include <stdlib.h>
int __arr_9595[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 7;
    int v2 = 1;
    int v3 = 13;
    int v4 = 78;
    int v5 = 64;
    int i;
    v5 = v5 * 6;
    for (i = 0; i < 10; i++) { __arr_9595[i] = v4 + i; }
    v3 = 60;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
