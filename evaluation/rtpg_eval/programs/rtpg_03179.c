#include <stdlib.h>
int test_func(void) {
    int v0 = 98;
    int v1 = 48;
    int v2 = 57;
    int v3 = 36;
    int v4 = 89;
    int v5 = 64;
    int i;
    v5 = 1;
    v0 = v0 * 8;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v3;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
