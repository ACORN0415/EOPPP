#include <stdlib.h>
int test_func(void) {
    int v0 = 67;
    int v1 = 46;
    int v2 = 18;
    int v3 = 94;
    int v4 = 67;
    int v5 = 18;
    int v6 = 25;
    int i;
    if (v2 > v4) { v2 = v4; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
