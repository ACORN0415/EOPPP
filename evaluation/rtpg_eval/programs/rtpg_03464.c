#include <stdlib.h>
int __arr_3464[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 84;
    int v2 = 75;
    int v3 = 32;
    int v4 = 41;
    int v5 = 0;
    int v6 = 88;
    int v7 = 20;
    int i;
    for (i = 0; i < 10; i++) { __arr_3464[i] = v2 + i; }
    if (v4 > v5) { v4 = v5; }
    v5 = v5 & v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
