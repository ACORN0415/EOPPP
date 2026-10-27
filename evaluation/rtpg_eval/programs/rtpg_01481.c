#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 22;
    int v2 = 27;
    int i;
    v1 = v1 - v0;
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
