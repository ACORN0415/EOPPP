#include <stdlib.h>
int __arr_4105[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 34;
    int v2 = 53;
    int v3 = 38;
    int v4 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_4105[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
