#include <stdlib.h>
int test_func(void) {
    int v0 = 87;
    int v1 = 17;
    int v2 = 0;
    int v3 = 23;
    int i;
    v2 = v2 * 3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
