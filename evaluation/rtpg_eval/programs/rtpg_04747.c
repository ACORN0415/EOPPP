#include <stdlib.h>
int __arr_4747[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 10;
    int v2 = 7;
    int i;
    v2 = 36;
    for (i = 0; i < 10; i++) { __arr_4747[i] = v1 + i; }
    v0 = v0 + v1;
    v1 = v1 / (v0 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
