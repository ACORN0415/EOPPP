#include <stdlib.h>
int test_func(void) {
    int v0 = 88;
    int v1 = 25;
    int v2 = 75;
    int v3 = 72;
    int v4 = 82;
    int v5 = 78;
    int v6 = 69;
    int i;
    v2 = v2 + v4;
    v6 = 2;
    v5 = v5 / (v6 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
