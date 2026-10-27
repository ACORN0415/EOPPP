#include <stdlib.h>
int test_func(void) {
    int v0 = 93;
    int v1 = 50;
    int v2 = 86;
    int v3 = 48;
    int v4 = 72;
    int v5 = 74;
    int i;
    if (v0 > v0) { v0 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
