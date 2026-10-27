#include <stdlib.h>
int __arr_6428[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 7;
    int v2 = 11;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    v0 = v0 + v0;
    for (i = 0; i < 10; i++) { __arr_6428[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
