#include <stdlib.h>
int test_func(void) {
    int v0 = 99;
    int v1 = 40;
    int v2 = 24;
    int v3 = 21;
    int v4 = 5;
    int v5 = 58;
    int v6 = 78;
    int i;
    v4 = v4 + v5;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v5;
    }
    v3 = 13;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
