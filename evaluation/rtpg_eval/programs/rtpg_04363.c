#include <stdlib.h>
int test_func(void) {
    int v0 = 5;
    int v1 = 81;
    int v2 = 19;
    int v3 = 68;
    int v4 = 82;
    int i;
    v4 = 38;
    v3 = v3 * 7;
    v1 = v1 ^ v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
