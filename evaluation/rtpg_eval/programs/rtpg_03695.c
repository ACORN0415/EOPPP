#include <stdlib.h>
int test_func(void) {
    int v0 = 41;
    int v1 = 70;
    int v2 = 57;
    int i;
    v2 = v2 + v0;
    v2 = v2 ^ v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
