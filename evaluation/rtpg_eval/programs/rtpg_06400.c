#include <stdlib.h>
int test_func(void) {
    int v0 = 37;
    int v1 = 25;
    int v2 = 78;
    int v3 = 77;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
