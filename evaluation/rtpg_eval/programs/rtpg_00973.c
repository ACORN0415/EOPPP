#include <stdlib.h>
int test_func(void) {
    int v0 = 19;
    int v1 = 35;
    int v2 = 76;
    int v3 = 95;
    int i;
    v3 = 73;
    v3 = v3 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
