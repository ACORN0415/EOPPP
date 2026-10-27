#include <stdlib.h>
int test_func(void) {
    int v0 = 70;
    int v1 = 56;
    int v2 = 72;
    int v3 = 16;
    int v4 = 57;
    int v5 = 24;
    int i;
    v4 = v4 + v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
