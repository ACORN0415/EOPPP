#include <stdlib.h>
int test_func(void) {
    int v0 = 40;
    int v1 = 44;
    int v2 = 3;
    int v3 = 0;
    int v4 = 69;
    int i;
    if (v0 > v4) { v0 = v4; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
