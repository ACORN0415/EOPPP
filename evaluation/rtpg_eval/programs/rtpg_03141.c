#include <stdlib.h>
int test_func(void) {
    int v0 = 85;
    int v1 = 88;
    int v2 = 60;
    int v3 = 96;
    int i;
    v3 = v3 + v0;
    v3 = 71;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v2;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
