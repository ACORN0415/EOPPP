#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 91;
    int v2 = 28;
    int v3 = 45;
    int v4 = 37;
    int i;
    if (v4 > v4) { v4 = v4; }
    v1 = v1 + v4;
    v4 = 97;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
