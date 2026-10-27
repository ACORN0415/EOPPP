#include <stdlib.h>
int __arr_6624[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 27;
    int v2 = 22;
    int v3 = 99;
    int v4 = 26;
    int v5 = 31;
    int i;
    for (i = 0; i < 10; i++) { __arr_6624[i] = v5 + i; }
    v5 = v5 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
