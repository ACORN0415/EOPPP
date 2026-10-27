#include <stdlib.h>
int test_func(void) {
    int v0 = 78;
    int v1 = 38;
    int v2 = 52;
    int v3 = 68;
    int v4 = 68;
    int v5 = 84;
    int v6 = 28;
    int v7 = 70;
    int i;
    for (i = 0; i < 19; i++) {
        v6 = v6 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
