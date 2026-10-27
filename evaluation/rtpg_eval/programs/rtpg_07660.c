#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 28;
    int v2 = 87;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
