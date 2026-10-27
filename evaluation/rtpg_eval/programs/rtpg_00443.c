#include <stdlib.h>
int test_func(void) {
    int v0 = 1;
    int v1 = 51;
    int v2 = 37;
    int v3 = 0;
    int v4 = 95;
    int v5 = 97;
    int v6 = 28;
    int i;
    if (v4 > v2) { v4 = v2; }
    v0 = 29;
    v0 = v0 / (v6 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
