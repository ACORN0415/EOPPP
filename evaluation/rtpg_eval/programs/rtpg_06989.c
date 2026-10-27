#include <stdlib.h>
int test_func(void) {
    int v0 = 19;
    int v1 = 80;
    int v2 = 11;
    int v3 = 9;
    int v4 = 35;
    int v5 = 76;
    int v6 = 71;
    int v7 = 2;
    int i;
    v2 = v2 * 10;
    v6 = v6 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
