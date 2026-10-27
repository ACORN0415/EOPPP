#include <stdlib.h>
int test_func(void) {
    int v0 = 55;
    int v1 = 75;
    int v2 = 86;
    int v3 = 36;
    int i;
    v0 = v0 - v1;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v0;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
