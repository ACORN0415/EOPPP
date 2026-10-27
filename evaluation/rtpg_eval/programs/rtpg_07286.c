#include <stdlib.h>
int __arr_7286[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 20;
    int v2 = 39;
    int v3 = 65;
    int v4 = 36;
    int i;
    v0 = v0 * 3;
    for (i = 0; i < 10; i++) { __arr_7286[i] = v0 + i; }
    v3 = v3 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v4 = v4 | v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
