#include <stdlib.h>
int test_func(void) {
    int v0 = 57;
    int v1 = 8;
    int v2 = 73;
    int v3 = 18;
    int i;
    if (v1 > v2) { v1 = v2; }
    v1 = v1 * 6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
