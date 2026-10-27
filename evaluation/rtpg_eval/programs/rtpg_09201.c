#include <stdlib.h>
int __arr_9201[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 65;
    int v2 = 98;
    int v3 = 96;
    int v4 = 27;
    int v5 = 36;
    int v6 = 82;
    int v7 = 25;
    int i;
    for (i = 0; i < 10; i++) { __arr_9201[i] = v5 + i; }
    v6 = v6 & v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
