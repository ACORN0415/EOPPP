#include <stdlib.h>
int test_func(void) {
    int v0 = 99;
    int v1 = 91;
    int v2 = 17;
    int v3 = 80;
    int v4 = 32;
    int v5 = 1;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v4;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
