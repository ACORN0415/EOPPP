#include <stdlib.h>
int test_func(void) {
    int v0 = 86;
    int v1 = 91;
    int v2 = 36;
    int v3 = 51;
    int v4 = 82;
    int v5 = 42;
    int v6 = 57;
    int v7 = 76;
    int i;
    v6 = 85;
    v5 = v5 + v0;
    if (v0 > v5) { v0 = v5; }
    int *__p = &v6;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
