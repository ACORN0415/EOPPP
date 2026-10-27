#include <stdlib.h>
int test_func(void) {
    int v0 = 65;
    int v1 = 83;
    int v2 = 73;
    int v3 = 62;
    int i;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v2 = v2 & v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
