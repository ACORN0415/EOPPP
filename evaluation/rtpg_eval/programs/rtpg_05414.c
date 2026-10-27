#include <stdlib.h>
int test_func(void) {
    int v0 = 81;
    int v1 = 70;
    int v2 = 26;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v1;
    }
    v1 = 39;
    v0 = v0 / (v2 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
