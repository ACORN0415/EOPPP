#include <stdlib.h>
int test_func(void) {
    int v0 = 0;
    int v1 = 2;
    int v2 = 0;
    int v3 = 63;
    int v4 = 54;
    int v5 = 52;
    int v6 = 16;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
