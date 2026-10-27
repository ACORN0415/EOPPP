#include <stdlib.h>
int __arr_4103[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 77;
    int v2 = 86;
    int v3 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_4103[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
