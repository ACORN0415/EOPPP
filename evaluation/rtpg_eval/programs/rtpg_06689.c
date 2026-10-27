#include <stdlib.h>
int __arr_6689[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 58;
    int v2 = 98;
    int v3 = 88;
    int v4 = 59;
    int v5 = 88;
    int i;
    v4 = v4 + v2;
    for (i = 0; i < 10; i++) { __arr_6689[i] = v3 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
