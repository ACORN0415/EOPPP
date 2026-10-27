#include <stdlib.h>
int test_func(void) {
    int v0 = 55;
    int v1 = 1;
    int v2 = 62;
    int v3 = 26;
    int v4 = 14;
    int v5 = 57;
    int v6 = 80;
    int v7 = 87;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
