#include <stdlib.h>
int test_func(void) {
    int v0 = 33;
    int v1 = 96;
    int v2 = 31;
    int v3 = 32;
    int v4 = 8;
    int v5 = 32;
    int i;
    if (v4 > v3) { v4 = v3; }
    v2 = v2 * 3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
