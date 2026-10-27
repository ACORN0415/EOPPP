#include <stdlib.h>
int __arr_7568[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 98;
    int v2 = 76;
    int v3 = 60;
    int v4 = 4;
    int v5 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_7568[i] = v5 + i; }
    if (v5 > v4) { v5 = v4; }
    v4 = 65;
    v5 = v5 | v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
