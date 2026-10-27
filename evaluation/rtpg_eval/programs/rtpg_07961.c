#include <stdlib.h>
int test_func(void) {
    int v0 = 14;
    int v1 = 90;
    int v2 = 51;
    int v3 = 48;
    int v4 = 39;
    int i;
    if (v4 > v3) { v4 = v3; }
    v0 = 55;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
