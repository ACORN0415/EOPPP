#include <stdlib.h>
int test_func(void) {
    int v0 = 82;
    int v1 = 89;
    int v2 = 65;
    int v3 = 91;
    int v4 = 83;
    int i;
    v1 = 51;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
