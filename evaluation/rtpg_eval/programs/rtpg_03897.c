#include <stdlib.h>
int test_func(void) {
    int v0 = 14;
    int v1 = 5;
    int v2 = 39;
    int i;
    v2 = 53;
    v1 = v1 + v0;
    int *__p = &v1;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
