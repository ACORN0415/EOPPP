#include <stdlib.h>
int test_func(void) {
    int v0 = 57;
    int v1 = 78;
    int v2 = 73;
    int v3 = 48;
    int v4 = 96;
    int v5 = 20;
    int v6 = 90;
    int i;
    v5 = v5 * 7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
