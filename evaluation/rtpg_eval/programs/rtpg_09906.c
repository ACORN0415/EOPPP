#include <stdlib.h>
int test_func(void) {
    int v0 = 54;
    int v1 = 22;
    int v2 = 81;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
