#include <stdlib.h>
int test_func(void) {
    int v0 = 44;
    int v1 = 48;
    int v2 = 13;
    int v3 = 32;
    int v4 = 97;
    int v5 = 58;
    int v6 = 73;
    int i;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v5;
    }
    v1 = v1 - v4;
    v6 = v6 | v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
