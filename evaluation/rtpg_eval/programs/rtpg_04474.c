#include <stdlib.h>
int test_func(void) {
    int v0 = 77;
    int v1 = 39;
    int v2 = 75;
    int v3 = 48;
    int v4 = 25;
    int v5 = 53;
    int v6 = 42;
    int v7 = 17;
    int i;
    v3 = 85;
    if (v5 > v6) { v5 = v6; }
    for (i = 0; i < 16; i++) {
        v5 = v5 + v3;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
