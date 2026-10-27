#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 9;
    int v2 = 31;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    v1 = v1 - v2;
    v2 = v2 * 10;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
