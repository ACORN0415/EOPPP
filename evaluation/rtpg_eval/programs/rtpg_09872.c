#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 90;
    int v2 = 81;
    int v3 = 29;
    int v4 = 9;
    int v5 = 93;
    int v6 = 85;
    int i;
    v1 = v1 - v0;
    if (v5 > v6) { v5 = v6; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
