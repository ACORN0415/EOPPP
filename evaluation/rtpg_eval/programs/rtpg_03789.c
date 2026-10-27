#include <stdlib.h>
int test_func(void) {
    int v0 = 40;
    int v1 = 65;
    int v2 = 65;
    int v3 = 43;
    int v4 = 51;
    int v5 = 13;
    int v6 = 57;
    int v7 = 18;
    int i;
    v7 = 54;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
