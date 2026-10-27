#include <stdlib.h>
int test_func(void) {
    int v0 = 16;
    int v1 = 63;
    int v2 = 35;
    int v3 = 19;
    int v4 = 90;
    int i;
    if (v1 > v2) { v1 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
