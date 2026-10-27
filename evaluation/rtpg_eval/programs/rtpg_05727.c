#include <stdlib.h>
int __arr_5727[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 55;
    int v2 = 9;
    int v3 = 21;
    int v4 = 7;
    int v5 = 40;
    int v6 = 81;
    int v7 = 39;
    int i;
    for (i = 0; i < 10; i++) { __arr_5727[i] = v7 + i; }
    for (i = 0; i < 17; i++) {
        v5 = v5 + v7;
    }
    v5 = v5 * 2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
