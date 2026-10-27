#include <stdlib.h>
int test_func(void) {
    int v0 = 59;
    int v1 = 3;
    int v2 = 100;
    int v3 = 38;
    int v4 = 39;
    int v5 = 24;
    int i;
    if (v1 > v5) { v1 = v5; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
