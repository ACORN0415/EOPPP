#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 70;
    int v2 = 22;
    int v3 = 13;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
