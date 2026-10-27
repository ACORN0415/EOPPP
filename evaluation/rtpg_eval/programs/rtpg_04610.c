#include <stdlib.h>
int test_func(void) {
    int v0 = 44;
    int v1 = 47;
    int v2 = 27;
    int v3 = 21;
    int v4 = 35;
    int v5 = 90;
    int v6 = 37;
    int i;
    if (v2 > v5) { v2 = v5; }
    v1 = v1 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
