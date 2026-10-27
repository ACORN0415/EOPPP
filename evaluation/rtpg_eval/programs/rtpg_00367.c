#include <stdlib.h>
int test_func(void) {
    int v0 = 51;
    int v1 = 83;
    int v2 = 15;
    int v3 = 31;
    int v4 = 34;
    int v5 = 36;
    int i;
    v5 = v5 + v4;
    v0 = 93;
    v5 = v5 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
