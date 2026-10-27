#include <stdlib.h>
int test_func(void) {
    int v0 = 30;
    int v1 = 80;
    int v2 = 52;
    int v3 = 82;
    int v4 = 51;
    int v5 = 77;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
