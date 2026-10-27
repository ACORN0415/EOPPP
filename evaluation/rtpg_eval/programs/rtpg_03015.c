#include <stdlib.h>
int test_func(void) {
    int v0 = 25;
    int v1 = 75;
    int v2 = 58;
    int v3 = 97;
    int v4 = 13;
    int v5 = 62;
    int v6 = 44;
    int i;
    v2 = v2 * 10;
    v2 = v2 + v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
