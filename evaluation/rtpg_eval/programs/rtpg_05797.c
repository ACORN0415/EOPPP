#include <stdlib.h>
int test_func(void) {
    int v0 = 87;
    int v1 = 84;
    int v2 = 85;
    int v3 = 95;
    int i;
    v0 = v0 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
