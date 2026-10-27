#include <stdlib.h>
int test_func(void) {
    int v0 = 19;
    int v1 = 34;
    int v2 = 64;
    int i;
    v0 = v0 * 7;
    v0 = 95;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
