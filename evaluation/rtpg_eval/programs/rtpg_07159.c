#include <stdlib.h>
int test_func(void) {
    int v0 = 24;
    int v1 = 34;
    int v2 = 24;
    int v3 = 51;
    int v4 = 59;
    int v5 = 42;
    int v6 = 100;
    int i;
    if (v3 > v4) { v3 = v4; }
    for (i = 0; i < 20; i++) {
        v0 = v0 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
