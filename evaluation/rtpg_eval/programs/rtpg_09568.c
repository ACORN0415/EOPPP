#include <stdlib.h>
int test_func(void) {
    int v0 = 68;
    int v1 = 30;
    int v2 = 96;
    int v3 = 100;
    int v4 = 19;
    int v5 = 84;
    int v6 = 25;
    int i;
    v4 = v4 & v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
