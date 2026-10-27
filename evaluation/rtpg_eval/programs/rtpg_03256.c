#include <stdlib.h>
int test_func(void) {
    int v0 = 48;
    int v1 = 13;
    int v2 = 42;
    int v3 = 55;
    int v4 = 64;
    int v5 = 84;
    int i;
    v0 = v0 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
