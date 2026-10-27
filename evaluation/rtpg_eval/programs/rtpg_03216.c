#include <stdlib.h>
int test_func(void) {
    int v0 = 41;
    int v1 = 36;
    int v2 = 54;
    int v3 = 59;
    int i;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v0;
    }
    v0 = 45;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v1 = v1 & v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
