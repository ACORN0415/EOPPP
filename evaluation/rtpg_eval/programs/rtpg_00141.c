#include <stdlib.h>
int test_func(void) {
    int v0 = 15;
    int v1 = 37;
    int v2 = 98;
    int v3 = 100;
    int v4 = 64;
    int v5 = 37;
    int v6 = 78;
    int i;
    v6 = 85;
    v3 = v3 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    v2 = v2 | v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
