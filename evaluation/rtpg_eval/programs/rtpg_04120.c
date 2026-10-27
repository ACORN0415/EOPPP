#include <stdlib.h>
int test_func(void) {
    int v0 = 59;
    int v1 = 81;
    int v2 = 35;
    int v3 = 73;
    int v4 = 19;
    int v5 = 60;
    int i;
    v1 = v1 * 8;
    v3 = v3 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
