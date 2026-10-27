#include <stdlib.h>
int test_func(void) {
    int v0 = 9;
    int v1 = 28;
    int v2 = 86;
    int v3 = 72;
    int v4 = 87;
    int v5 = 22;
    int v6 = 97;
    int i;
    v4 = v4 + v3;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    v5 = v5 & v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
