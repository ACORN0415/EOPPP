#include <stdlib.h>
int test_func(void) {
    int v0 = 21;
    int v1 = 80;
    int v2 = 55;
    int v3 = 69;
    int v4 = 68;
    int v5 = 76;
    int i;
    v2 = v2 * 5;
    if (v0 > v0) { v0 = v0; }
    for (i = 0; i < 16; i++) {
        v2 = v2 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    v0 = v0 | v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
