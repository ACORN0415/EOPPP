#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 24;
    int v2 = 21;
    int v3 = 78;
    int v4 = 77;
    int v5 = 46;
    int v6 = 51;
    int v7 = 12;
    int i;
    v5 = v5 - v3;
    v3 = v3 * 7;
    v1 = 23;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
