#include <stdlib.h>
int __arr_5093[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 95;
    int v2 = 19;
    int i;
    v1 = v1 * 7;
    for (i = 0; i < 10; i++) { __arr_5093[i] = v1 + i; }
    v0 = v0 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
