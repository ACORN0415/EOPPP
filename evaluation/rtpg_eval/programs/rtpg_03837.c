#include <stdlib.h>
int test_func(void) {
    int v0 = 38;
    int v1 = 47;
    int v2 = 57;
    int v3 = 69;
    int v4 = 27;
    int v5 = 12;
    int i;
    v0 = v0 - v1;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v0;
    }
    int *__p = &v5;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
