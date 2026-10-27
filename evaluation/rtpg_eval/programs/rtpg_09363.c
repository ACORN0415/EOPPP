#include <stdlib.h>
int test_func(void) {
    int v0 = 52;
    int v1 = 76;
    int v2 = 16;
    int v3 = 76;
    int i;
    v1 = v1 * 4;
    v0 = v0 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
