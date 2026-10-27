#include <stdlib.h>
int __arr_8896[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 79;
    int v2 = 78;
    int v3 = 62;
    int v4 = 67;
    int v5 = 65;
    int v6 = 11;
    int i;
    if (v5 > v3) { v5 = v3; }
    for (i = 0; i < 10; i++) { __arr_8896[i] = v3 + i; }
    v3 = v3 * 7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
