#include <stdlib.h>
int test_func(void) {
    int v0 = 73;
    int v1 = 78;
    int v2 = 35;
    int v3 = 67;
    int v4 = 26;
    int v5 = 17;
    int i;
    v3 = v3 + v0;
    v2 = 39;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
