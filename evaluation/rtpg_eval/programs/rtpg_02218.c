#include <stdlib.h>
int test_func(void) {
    int v0 = 84;
    int v1 = 58;
    int v2 = 89;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
