#include <stdlib.h>
int test_func(void) {
    int v0 = 20;
    int v1 = 19;
    int v2 = 26;
    int v3 = 12;
    int v4 = 27;
    int v5 = 42;
    int i;
    if (v5 > v5) { v5 = v5; }
    v0 = v0 - v5;
    v1 = v1 % (v3 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
