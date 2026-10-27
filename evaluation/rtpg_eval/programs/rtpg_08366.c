#include <stdlib.h>
int test_func(void) {
    int v0 = 42;
    int v1 = 86;
    int v2 = 91;
    int v3 = 69;
    int v4 = 14;
    int i;
    if (v4 > v0) { v4 = v0; }
    v1 = v1 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
