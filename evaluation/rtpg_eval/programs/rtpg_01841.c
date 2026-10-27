#include <stdlib.h>
int test_func(void) {
    int v0 = 23;
    int v1 = 10;
    int v2 = 31;
    int v3 = 23;
    int v4 = 28;
    int v5 = 73;
    int v6 = 39;
    int i;
    v2 = v2 + v3;
    v5 = v5 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
