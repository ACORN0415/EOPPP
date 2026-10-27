#include <stdlib.h>
int test_func(void) {
    int v0 = 17;
    int v1 = 67;
    int v2 = 90;
    int v3 = 75;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
