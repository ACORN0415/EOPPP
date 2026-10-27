#include <stdlib.h>
int test_func(void) {
    int v0 = 74;
    int v1 = 54;
    int v2 = 74;
    int v3 = 31;
    int v4 = 23;
    int i;
    if (v2 > v4) { v2 = v4; }
    v1 = v1 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
