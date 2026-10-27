#include <stdlib.h>
int __arr_9029[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 9;
    int v2 = 77;
    int v3 = 93;
    int v4 = 20;
    int v5 = 47;
    int i;
    v5 = v5 * 8;
    v1 = v1 + v1;
    for (i = 0; i < 10; i++) { __arr_9029[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
