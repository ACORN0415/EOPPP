#include <stdlib.h>
int test_func(void) {
    int v0 = 31;
    int v1 = 33;
    int v2 = 25;
    int v3 = 44;
    int v4 = 51;
    int v5 = 91;
    int i;
    v4 = 6;
    v2 = v2 - v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
