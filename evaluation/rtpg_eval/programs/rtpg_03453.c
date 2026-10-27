#include <stdlib.h>
int test_func(void) {
    int v0 = 13;
    int v1 = 47;
    int v2 = 67;
    int v3 = 85;
    int v4 = 87;
    int v5 = 61;
    int v6 = 72;
    int i;
    v0 = 26;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
