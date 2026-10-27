#include <stdlib.h>
int test_func(void) {
    int v0 = 92;
    int v1 = 27;
    int v2 = 23;
    int v3 = 72;
    int i;
    if (v3 > v0) { v3 = v0; }
    v2 = v2 * 7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
