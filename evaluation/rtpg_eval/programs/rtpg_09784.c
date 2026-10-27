#include <stdlib.h>
int test_func(void) {
    int v0 = 68;
    int v1 = 86;
    int v2 = 59;
    int v3 = 13;
    int v4 = 58;
    int v5 = 46;
    int v6 = 80;
    int i;
    v6 = 56;
    v3 = v3 * 5;
    v6 = v6 | v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
