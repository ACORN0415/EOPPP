#include <stdlib.h>
int test_func(void) {
    int v0 = 32;
    int v1 = 47;
    int v2 = 12;
    int v3 = 87;
    int v4 = 43;
    int v5 = 13;
    int v6 = 84;
    int i;
    v0 = 16;
    v3 = v3 - v0;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
