#include <stdlib.h>
int test_func(void) {
    int v0 = 47;
    int v1 = 83;
    int v2 = 82;
    int i;
    v1 = v1 - v0;
    v0 = 64;
    if (v2 > v0) { v2 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
