#include <stdlib.h>
int test_func(void) {
    int v0 = 23;
    int v1 = 86;
    int v2 = 21;
    int v3 = 63;
    int v4 = 52;
    int v5 = 91;
    int v6 = 27;
    int i;
    v6 = v6 * 5;
    v4 = v4 - v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v2 = v2 & v4;
    return v0;
}
int main(void) { return test_func(); }
