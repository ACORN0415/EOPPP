#include <stdlib.h>
int __arr_7031[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 63;
    int v2 = 4;
    int v3 = 65;
    int v4 = 67;
    int v5 = 15;
    int v6 = 97;
    int i;
    v3 = v3 + v2;
    for (i = 0; i < 17; i++) {
        v6 = v6 + v6;
    }
    for (i = 0; i < 10; i++) { __arr_7031[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
