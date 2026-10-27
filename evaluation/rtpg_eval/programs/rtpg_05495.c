#include <stdlib.h>
int test_func(void) {
    int v0 = 31;
    int v1 = 42;
    int v2 = 73;
    int v3 = 58;
    int v4 = 92;
    int i;
    if (v3 > v1) { v3 = v1; }
    v4 = v4 + v0;
    v4 = 31;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
