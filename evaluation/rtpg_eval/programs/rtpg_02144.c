#include <stdlib.h>
int test_func(void) {
    int v0 = 43;
    int v1 = 34;
    int v2 = 50;
    int v3 = 23;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v3;
    }
    v2 = v2 + v0;
    v0 = v0 * 3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
