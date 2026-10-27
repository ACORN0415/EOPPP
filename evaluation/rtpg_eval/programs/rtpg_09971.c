#include <stdlib.h>
int test_func(void) {
    int v0 = 90;
    int v1 = 13;
    int v2 = 22;
    int v3 = 84;
    int v4 = 0;
    int v5 = 43;
    int v6 = 73;
    int v7 = 44;
    int i;
    v7 = v7 + v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
