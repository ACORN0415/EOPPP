#include <stdlib.h>
int test_func(void) {
    int v0 = 50;
    int v1 = 87;
    int v2 = 7;
    int v3 = 81;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v3;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
