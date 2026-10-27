#include <stdlib.h>
int test_func(void) {
    int v0 = 31;
    int v1 = 32;
    int v2 = 16;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
