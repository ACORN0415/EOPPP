#include <stdlib.h>
int test_func(void) {
    int v0 = 85;
    int v1 = 30;
    int v2 = 62;
    int v3 = 99;
    int v4 = 76;
    int v5 = 30;
    int v6 = 57;
    int i;
    v4 = v4 * 3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
