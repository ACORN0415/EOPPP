#include <stdlib.h>
int test_func(void) {
    int v0 = 73;
    int v1 = 86;
    int v2 = 18;
    int v3 = 91;
    int i;
    v2 = v2 + v3;
    v2 = 39;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
