#include <stdlib.h>
int test_func(void) {
    int v0 = 33;
    int v1 = 80;
    int v2 = 39;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
