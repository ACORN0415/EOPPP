#include <stdlib.h>
int test_func(void) {
    int v0 = 31;
    int v1 = 83;
    int v2 = 78;
    int v3 = 52;
    int v4 = 61;
    int v5 = 38;
    int i;
    for (i = 0; i < 10; i++) {
        v5 = v5 + v1;
    }
    v2 = v2 - v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
