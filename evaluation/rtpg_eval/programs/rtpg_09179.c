#include <stdlib.h>
int __arr_9179[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 18;
    int v2 = 3;
    int i;
    for (i = 0; i < 10; i++) { __arr_9179[i] = v0 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
