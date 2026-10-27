#include <stdlib.h>
int __arr_6612[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 88;
    int v2 = 27;
    int v3 = 43;
    int i;
    v2 = 50;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_6612[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
