#include <stdlib.h>
int test_func(void) {
    int v0 = 51;
    int v1 = 13;
    int v2 = 5;
    int v3 = 1;
    int v4 = 70;
    int v5 = 46;
    int i;
    v1 = v1 * 7;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
