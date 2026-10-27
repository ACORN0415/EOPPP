#include <stdlib.h>
int test_func(void) {
    int v0 = 15;
    int v1 = 44;
    int v2 = 21;
    int v3 = 100;
    int i;
    if (v3 > v0) { v3 = v0; }
    v3 = v3 % (v2 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
