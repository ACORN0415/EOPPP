#include <stdlib.h>
int __arr_9251[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 97;
    int v2 = 13;
    int v3 = 39;
    int i;
    v1 = 55;
    for (i = 0; i < 10; i++) { __arr_9251[i] = v3 + i; }
    v0 = v0 * 4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
