#include <stdlib.h>
int test_func(void) {
    int v0 = 38;
    int v1 = 8;
    int v2 = 66;
    int v3 = 77;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v1;
    }
    if (v0 > v3) { v0 = v3; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
