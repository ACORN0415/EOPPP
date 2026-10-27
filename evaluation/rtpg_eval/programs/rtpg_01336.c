#include <stdlib.h>
int test_func(void) {
    int v0 = 15;
    int v1 = 14;
    int v2 = 4;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v2;
    }
    if (v0 > v1) { v0 = v1; }
    v0 = v0 * 5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
