#include <stdlib.h>
int test_func(void) {
    int v0 = 92;
    int v1 = 30;
    int v2 = 30;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    v2 = v2 & v1;
    return v0;
}
int main(void) { return test_func(); }
