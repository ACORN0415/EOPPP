#include <stdlib.h>
int test_func(void) {
    int v0 = 78;
    int v1 = 49;
    int v2 = 41;
    int v3 = 17;
    int v4 = 96;
    int v5 = 11;
    int v6 = 10;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v5;
    }
    if (v2 > v1) { v2 = v1; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
