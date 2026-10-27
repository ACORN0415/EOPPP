#include <stdlib.h>
int test_func(void) {
    int v0 = 20;
    int v1 = 33;
    int v2 = 77;
    int v3 = 74;
    int v4 = 14;
    int v5 = 12;
    int v6 = 1;
    int i;
    v0 = v0 * 6;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
