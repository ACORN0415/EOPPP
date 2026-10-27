#include <stdlib.h>
int test_func(void) {
    int v0 = 35;
    int v1 = 25;
    int v2 = 36;
    int v3 = 13;
    int v4 = 39;
    int v5 = 76;
    int v6 = 15;
    int v7 = 92;
    int i;
    v0 = v0 | v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
