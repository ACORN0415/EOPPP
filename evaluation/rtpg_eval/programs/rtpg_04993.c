#include <stdlib.h>
int test_func(void) {
    int v0 = 73;
    int v1 = 76;
    int v2 = 33;
    int i;
    v2 = 100;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
