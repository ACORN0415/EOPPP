#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 53;
    int v2 = 19;
    int v3 = 34;
    int v4 = 91;
    int i;
    v0 = v0 + v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
