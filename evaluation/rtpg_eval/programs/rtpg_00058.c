#include <stdlib.h>
int test_func(void) {
    int v0 = 43;
    int v1 = 19;
    int v2 = 20;
    int v3 = 95;
    int v4 = 74;
    int v5 = 73;
    int i;
    v5 = 72;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
