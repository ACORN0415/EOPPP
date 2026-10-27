#include <stdlib.h>
int test_func(void) {
    int v0 = 11;
    int v1 = 3;
    int v2 = 23;
    int v3 = 32;
    int v4 = 4;
    int i;
    v4 = 80;
    v2 = v2 * 8;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
