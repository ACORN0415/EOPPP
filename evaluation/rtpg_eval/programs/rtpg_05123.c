#include <stdlib.h>
int __arr_5123[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 60;
    int v2 = 43;
    int v3 = 33;
    int v4 = 10;
    int i;
    v4 = v4 + v3;
    for (i = 0; i < 10; i++) { __arr_5123[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
