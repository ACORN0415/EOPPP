#include <stdlib.h>
int test_func(void) {
    int v0 = 82;
    int v1 = 24;
    int v2 = 44;
    int v3 = 32;
    int v4 = 52;
    int v5 = 13;
    int v6 = 41;
    int v7 = 45;
    int i;
    v0 = v0 + v2;
    v1 = v1 * 6;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
