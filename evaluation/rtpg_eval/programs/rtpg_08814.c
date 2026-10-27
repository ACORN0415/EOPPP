#include <stdlib.h>
int test_func(void) {
    int v0 = 8;
    int v1 = 45;
    int v2 = 79;
    int v3 = 22;
    int v4 = 21;
    int v5 = 67;
    int v6 = 95;
    int i;
    v3 = v3 + v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v5 = v5 & v4;
    return v0;
}
int main(void) { return test_func(); }
