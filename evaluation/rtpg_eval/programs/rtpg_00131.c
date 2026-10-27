#include <stdlib.h>
int test_func(void) {
    int v0 = 30;
    int v1 = 35;
    int v2 = 7;
    int v3 = 63;
    int i;
    v0 = 71;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
