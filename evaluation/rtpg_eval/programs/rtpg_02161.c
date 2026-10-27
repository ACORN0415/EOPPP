#include <stdlib.h>
int __arr_2161[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 58;
    int v2 = 27;
    int v3 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_2161[i] = v1 + i; }
    v2 = v2 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
