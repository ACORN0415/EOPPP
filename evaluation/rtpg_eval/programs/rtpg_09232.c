#include <stdlib.h>
int test_func(void) {
    int v0 = 77;
    int v1 = 61;
    int v2 = 13;
    int v3 = 87;
    int v4 = 51;
    int v5 = 99;
    int v6 = 98;
    int i;
    v6 = v6 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
