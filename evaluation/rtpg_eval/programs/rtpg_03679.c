#include <stdlib.h>
int test_func(void) {
    int v0 = 41;
    int v1 = 49;
    int v2 = 0;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v0;
    }
    if (v2 > v1) { v2 = v1; }
    v0 = v0 * 6;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
