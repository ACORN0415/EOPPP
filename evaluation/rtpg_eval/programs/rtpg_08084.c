#include <stdlib.h>
int test_func(void) {
    int v0 = 59;
    int v1 = 23;
    int v2 = 14;
    int v3 = 57;
    int i;
    v3 = v3 * 2;
    if (v0 > v3) { v0 = v3; }
    v3 = v3 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
