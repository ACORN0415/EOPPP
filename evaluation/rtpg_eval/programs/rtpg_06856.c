#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 2;
    int v2 = 57;
    int v3 = 13;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v3;
    }
    v0 = v0 * 7;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
