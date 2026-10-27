#include <stdlib.h>
int test_func(void) {
    int v0 = 9;
    int v1 = 58;
    int v2 = 53;
    int v3 = 41;
    int v4 = 44;
    int v5 = 14;
    int v6 = 96;
    int i;
    for (i = 0; i < 8; i++) {
        v5 = v5 + v6;
    }
    v4 = v4 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v2 = v2 ^ v6;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
