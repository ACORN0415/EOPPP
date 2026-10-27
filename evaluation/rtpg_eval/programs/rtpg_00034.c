#include <stdlib.h>
int test_func(void) {
    int v0 = 13;
    int v1 = 82;
    int v2 = 60;
    int v3 = 38;
    int v4 = 24;
    int v5 = 90;
    int v6 = 98;
    int i;
    v0 = v0 + v1;
    v5 = 65;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
