#include <stdlib.h>
int test_func(void) {
    int v0 = 40;
    int v1 = 20;
    int v2 = 87;
    int v3 = 98;
    int v4 = 74;
    int v5 = 29;
    int v6 = 18;
    int v7 = 91;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
