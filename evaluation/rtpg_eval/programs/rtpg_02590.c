#include <stdlib.h>
int test_func(void) {
    int v0 = 41;
    int v1 = 2;
    int v2 = 1;
    int v3 = 26;
    int v4 = 36;
    int i;
    v4 = v4 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
