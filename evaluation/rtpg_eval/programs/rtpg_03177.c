#include <stdlib.h>
int test_func(void) {
    int v0 = 44;
    int v1 = 65;
    int v2 = 75;
    int v3 = 81;
    int v4 = 98;
    int v5 = 95;
    int i;
    v4 = v4 * 9;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
