#include <stdlib.h>
int test_func(void) {
    int v0 = 39;
    int v1 = 60;
    int v2 = 44;
    int v3 = 53;
    int v4 = 74;
    int v5 = 68;
    int v6 = 54;
    int i;
    v3 = 50;
    v6 = v6 & v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
