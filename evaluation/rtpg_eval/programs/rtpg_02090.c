#include <stdlib.h>
int test_func(void) {
    int v0 = 56;
    int v1 = 35;
    int v2 = 81;
    int v3 = 65;
    int v4 = 60;
    int v5 = 85;
    int i;
    v1 = v1 + v3;
    if (v1 > v2) { v1 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
