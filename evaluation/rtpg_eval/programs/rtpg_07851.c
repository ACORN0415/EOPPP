#include <stdlib.h>
int test_func(void) {
    int v0 = 67;
    int v1 = 29;
    int v2 = 74;
    int v3 = 75;
    int v4 = 62;
    int v5 = 61;
    int i;
    v3 = 12;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v1;
    }
    v1 = v1 | v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
