#include <stdlib.h>
int test_func(void) {
    int v0 = 21;
    int v1 = 56;
    int v2 = 98;
    int v3 = 67;
    int i;
    if (v1 > v2) { v1 = v2; }
    v1 = v1 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
