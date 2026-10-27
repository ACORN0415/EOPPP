#include <stdlib.h>
int test_func(void) {
    int v0 = 75;
    int v1 = 25;
    int v2 = 43;
    int i;
    v2 = v2 + v2;
    v0 = v0 - v1;
    if (v0 > v1) { v0 = v1; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
