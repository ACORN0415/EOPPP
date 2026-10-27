#include <stdlib.h>
int test_func(void) {
    int v0 = 34;
    int v1 = 2;
    int v2 = 3;
    int v3 = 26;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v1;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
