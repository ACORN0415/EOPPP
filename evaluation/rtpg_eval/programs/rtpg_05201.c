#include <stdlib.h>
int __arr_5201[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 38;
    int v2 = 66;
    int v3 = 73;
    int v4 = 88;
    int v5 = 11;
    int i;
    v5 = 45;
    for (i = 0; i < 10; i++) { __arr_5201[i] = v5 + i; }
    v0 = v0 & v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
