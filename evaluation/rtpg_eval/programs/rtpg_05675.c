#include <stdlib.h>
int test_func(void) {
    int v0 = 10;
    int v1 = 24;
    int v2 = 48;
    int v3 = 57;
    int v4 = 74;
    int v5 = 14;
    int v6 = 71;
    int v7 = 35;
    int i;
    v3 = v3 - v6;
    v6 = v6 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
