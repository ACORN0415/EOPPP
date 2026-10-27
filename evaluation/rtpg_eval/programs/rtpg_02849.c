#include <stdlib.h>
int __arr_2849[10];
int test_func(void) {
    int v0 = 16;
    int v1 = 77;
    int v2 = 67;
    int v3 = 26;
    int v4 = 47;
    int i;
    v4 = v4 + v1;
    for (i = 0; i < 10; i++) { __arr_2849[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
