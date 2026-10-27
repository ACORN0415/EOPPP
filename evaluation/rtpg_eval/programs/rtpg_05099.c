#include <stdlib.h>
int test_func(void) {
    int v0 = 16;
    int v1 = 94;
    int v2 = 50;
    int v3 = 67;
    int v4 = 39;
    int v5 = 35;
    int i;
    if (v2 > v3) { v2 = v3; }
    v4 = 64;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
