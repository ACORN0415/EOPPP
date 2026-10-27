#include <stdlib.h>
int test_func(void) {
    int v0 = 25;
    int v1 = 90;
    int v2 = 42;
    int i;
    v0 = 32;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
