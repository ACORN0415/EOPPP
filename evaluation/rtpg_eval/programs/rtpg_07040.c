#include <stdlib.h>
int test_func(void) {
    int v0 = 16;
    int v1 = 15;
    int v2 = 10;
    int v3 = 83;
    int v4 = 22;
    int v5 = 26;
    int i;
    if (v3 > v5) { v3 = v5; }
    v0 = v0 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
