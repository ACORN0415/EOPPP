#include <stdlib.h>
int test_func(void) {
    int v0 = 38;
    int v1 = 43;
    int v2 = 73;
    int v3 = 38;
    int v4 = 37;
    int v5 = 73;
    int i;
    for (i = 0; i < 6; i++) {
        v5 = v5 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
