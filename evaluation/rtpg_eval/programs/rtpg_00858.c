#include <stdlib.h>
int test_func(void) {
    int v0 = 28;
    int v1 = 22;
    int v2 = 31;
    int v3 = 22;
    int i;
    if (v1 > v3) { v1 = v3; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
