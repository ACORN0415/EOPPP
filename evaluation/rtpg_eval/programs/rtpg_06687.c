#include <stdlib.h>
int test_func(void) {
    int v0 = 0;
    int v1 = 63;
    int v2 = 21;
    int v3 = 85;
    int v4 = 78;
    int v5 = 23;
    int v6 = 28;
    int v7 = 32;
    int i;
    if (v6 > v6) { v6 = v6; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
