#include <stdlib.h>
int test_func(void) {
    int v0 = 76;
    int v1 = 91;
    int v2 = 79;
    int v3 = 28;
    int v4 = 13;
    int v5 = 57;
    int v6 = 83;
    int i;
    v5 = v5 - v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
