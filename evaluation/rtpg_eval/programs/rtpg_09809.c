#include <stdlib.h>
int test_func(void) {
    int v0 = 84;
    int v1 = 27;
    int v2 = 33;
    int v3 = 95;
    int v4 = 84;
    int v5 = 49;
    int i;
    v0 = 52;
    v2 = v2 - v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
