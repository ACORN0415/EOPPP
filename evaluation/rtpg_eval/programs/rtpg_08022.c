#include <stdlib.h>
int test_func(void) {
    int v0 = 67;
    int v1 = 36;
    int v2 = 37;
    int v3 = 31;
    int i;
    v0 = v0 + v2;
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
