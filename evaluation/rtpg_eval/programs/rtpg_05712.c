#include <stdlib.h>
int test_func(void) {
    int v0 = 87;
    int v1 = 95;
    int v2 = 100;
    int v3 = 84;
    int v4 = 62;
    int v5 = 60;
    int i;
    v2 = v2 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
