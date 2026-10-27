#include <stdlib.h>
int __arr_4564[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 8;
    int v2 = 10;
    int v3 = 36;
    int v4 = 19;
    int v5 = 85;
    int v6 = 91;
    int v7 = 83;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_4564[i] = v0 + i; }
    v4 = 18;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
