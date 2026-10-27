#include <stdlib.h>
int test_func(void) {
    int v0 = 6;
    int v1 = 46;
    int v2 = 76;
    int v3 = 79;
    int i;
    v2 = v2 + v3;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v3;
    }
    if (v3 > v0) { v3 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
