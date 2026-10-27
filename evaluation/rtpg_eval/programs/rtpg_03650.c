#include <stdlib.h>
int test_func(void) {
    int v0 = 8;
    int v1 = 33;
    int v2 = 34;
    int v3 = 40;
    int i;
    v1 = 72;
    if (v1 > v3) { v1 = v3; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
