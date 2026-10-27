#include <stdlib.h>
int __arr_970[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 68;
    int v2 = 82;
    int v3 = 13;
    int v4 = 28;
    int v5 = 85;
    int v6 = 21;
    int i;
    for (i = 0; i < 10; i++) { __arr_970[i] = v6 + i; }
    for (i = 0; i < 12; i++) {
        v3 = v3 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
