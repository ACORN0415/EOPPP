#include <stdlib.h>
int __arr_2815[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 30;
    int v2 = 19;
    int v3 = 5;
    int i;
    v0 = v0 * 6;
    v2 = 23;
    for (i = 0; i < 10; i++) { __arr_2815[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
