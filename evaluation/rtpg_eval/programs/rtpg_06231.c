#include <stdlib.h>
int __arr_6231[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 24;
    int v2 = 95;
    int v3 = 19;
    int v4 = 50;
    int v5 = 88;
    int i;
    v5 = v5 - v0;
    for (i = 0; i < 10; i++) { __arr_6231[i] = v4 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
