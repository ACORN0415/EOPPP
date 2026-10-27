#include <stdlib.h>
int test_func(void) {
    int v0 = 3;
    int v1 = 31;
    int v2 = 31;
    int v3 = 42;
    int v4 = 46;
    int v5 = 65;
    int v6 = 27;
    int i;
    v3 = 59;
    v6 = v6 - v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
