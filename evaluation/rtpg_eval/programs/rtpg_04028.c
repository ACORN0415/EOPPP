#include <stdlib.h>
int __arr_4028[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 71;
    int v2 = 41;
    int v3 = 76;
    int v4 = 70;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_4028[i] = v3 + i; }
    v3 = v3 * 7;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
