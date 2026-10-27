#include <stdlib.h>
int test_func(void) {
    int v0 = 72;
    int v1 = 20;
    int v2 = 98;
    int v3 = 96;
    int v4 = 90;
    int v5 = 36;
    int v6 = 7;
    int v7 = 68;
    int i;
    v4 = v4 - v0;
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
