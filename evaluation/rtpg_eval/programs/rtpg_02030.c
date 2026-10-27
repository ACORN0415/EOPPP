#include <stdlib.h>
int test_func(void) {
    int v0 = 48;
    int v1 = 70;
    int v2 = 65;
    int i;
    v2 = v2 + v2;
    v1 = v1 - v2;
    int *__p = &v2;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
