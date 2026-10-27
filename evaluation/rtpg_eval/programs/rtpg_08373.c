#include <stdlib.h>
int test_func(void) {
    int v0 = 96;
    int v1 = 78;
    int v2 = 49;
    int v3 = 12;
    int v4 = 37;
    int v5 = 47;
    int v6 = 82;
    int v7 = 4;
    int i;
    v0 = v0 - v5;
    v7 = 13;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
