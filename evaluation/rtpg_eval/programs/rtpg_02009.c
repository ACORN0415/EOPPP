#include <stdlib.h>
int test_func(void) {
    int v0 = 94;
    int v1 = 84;
    int v2 = 97;
    int v3 = 24;
    int v4 = 87;
    int v5 = 57;
    int i;
    v2 = v2 + v2;
    if (v2 > v4) { v2 = v4; }
    v4 = v4 * 4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
