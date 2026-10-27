#include <stdlib.h>
int test_func(void) {
    int v0 = 91;
    int v1 = 78;
    int v2 = 69;
    int v3 = 51;
    int v4 = 42;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
