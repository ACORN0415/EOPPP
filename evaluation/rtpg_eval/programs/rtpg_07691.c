#include <stdlib.h>
int test_func(void) {
    int v0 = 80;
    int v1 = 22;
    int v2 = 12;
    int v3 = 95;
    int v4 = 40;
    int v5 = 29;
    int v6 = 83;
    int i;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v5;
    }
    if (v5 > v6) { v5 = v6; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
