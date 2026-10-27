#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 1;
    int v2 = 6;
    int v3 = 61;
    int v4 = 83;
    int v5 = 19;
    int i;
    v5 = v5 - v2;
    v4 = 33;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
