#include <stdlib.h>
int test_func(void) {
    int v0 = 77;
    int v1 = 74;
    int v2 = 72;
    int v3 = 48;
    int v4 = 8;
    int i;
    v2 = v2 - v4;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
