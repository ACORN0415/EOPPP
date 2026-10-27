#include <stdlib.h>
int test_func(void) {
    int v0 = 15;
    int v1 = 15;
    int v2 = 49;
    int v3 = 2;
    int v4 = 100;
    int v5 = 34;
    int i;
    for (i = 0; i < 17; i++) {
        v5 = v5 + v1;
    }
    v2 = v2 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
