#include <stdlib.h>
int test_func(void) {
    int v0 = 44;
    int v1 = 14;
    int v2 = 6;
    int v3 = 21;
    int v4 = 74;
    int v5 = 0;
    int i;
    v3 = v3 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
