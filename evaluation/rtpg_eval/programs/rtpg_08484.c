#include <stdlib.h>
int test_func(void) {
    int v0 = 13;
    int v1 = 18;
    int v2 = 41;
    int v3 = 19;
    int v4 = 44;
    int i;
    v3 = 13;
    v0 = v0 * 5;
    v1 = v1 + v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
