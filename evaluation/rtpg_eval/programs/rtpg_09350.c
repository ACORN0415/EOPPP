#include <stdlib.h>
int test_func(void) {
    int v0 = 90;
    int v1 = 25;
    int v2 = 89;
    int v3 = 32;
    int v4 = 64;
    int v5 = 47;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v2;
    }
    v5 = v5 + v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
