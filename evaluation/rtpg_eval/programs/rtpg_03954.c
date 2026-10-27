#include <stdlib.h>
int test_func(void) {
    int v0 = 27;
    int v1 = 67;
    int v2 = 38;
    int v3 = 45;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
