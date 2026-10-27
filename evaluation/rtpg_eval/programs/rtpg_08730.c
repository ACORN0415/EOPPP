#include <stdlib.h>
int test_func(void) {
    int v0 = 55;
    int v1 = 1;
    int v2 = 80;
    int v3 = 48;
    int v4 = 72;
    int v5 = 55;
    int v6 = 31;
    int i;
    v2 = v2 - v6;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
