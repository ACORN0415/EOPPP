#include <stdlib.h>
int test_func(void) {
    int v0 = 48;
    int v1 = 17;
    int v2 = 17;
    int v3 = 8;
    int v4 = 94;
    int v5 = 18;
    int i;
    if (v3 > v2) { v3 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
