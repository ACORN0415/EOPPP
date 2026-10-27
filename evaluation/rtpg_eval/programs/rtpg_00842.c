#include <stdlib.h>
int test_func(void) {
    int v0 = 30;
    int v1 = 20;
    int v2 = 1;
    int v3 = 47;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
