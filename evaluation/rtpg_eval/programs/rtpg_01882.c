#include <stdlib.h>
int test_func(void) {
    int v0 = 33;
    int v1 = 60;
    int v2 = 19;
    int i;
    v2 = v2 - v1;
    v1 = v1 + v0;
    v2 = v2 & v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
