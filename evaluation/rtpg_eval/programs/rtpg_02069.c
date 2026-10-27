#include <stdlib.h>
int test_func(void) {
    int v0 = 87;
    int v1 = 90;
    int v2 = 73;
    int v3 = 87;
    int v4 = 16;
    int v5 = 8;
    int i;
    if (v4 > v5) { v4 = v5; }
    v0 = 94;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
