#include <stdlib.h>
int test_func(void) {
    int v0 = 39;
    int v1 = 25;
    int v2 = 10;
    int v3 = 68;
    int i;
    v3 = v3 * 4;
    v1 = 28;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
