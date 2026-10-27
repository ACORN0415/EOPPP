#include <stdlib.h>
int test_func(void) {
    int v0 = 13;
    int v1 = 55;
    int v2 = 51;
    int v3 = 65;
    int v4 = 58;
    int i;
    v1 = v1 + v2;
    v1 = v1 * 3;
    int *__p = &v4;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
