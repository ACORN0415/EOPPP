#include <stdlib.h>
int __arr_802[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 97;
    int v2 = 8;
    int v3 = 64;
    int v4 = 88;
    int v5 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_802[i] = v4 + i; }
    v3 = v3 * 4;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
