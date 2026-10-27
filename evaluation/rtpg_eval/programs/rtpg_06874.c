#include <stdlib.h>
int test_func(void) {
    int v0 = 12;
    int v1 = 98;
    int v2 = 91;
    int i;
    v1 = v1 * 10;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
