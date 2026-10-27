#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 23;
    int v2 = 47;
    int v3 = 18;
    int v4 = 42;
    int v5 = 2;
    int v6 = 77;
    int i;
    v3 = 10;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
