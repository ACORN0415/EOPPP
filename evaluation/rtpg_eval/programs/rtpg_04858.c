#include <stdlib.h>
int test_func(void) {
    int v0 = 91;
    int v1 = 90;
    int v2 = 100;
    int i;
    v1 = v1 * 9;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v2;
    }
    v1 = v1 - v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
