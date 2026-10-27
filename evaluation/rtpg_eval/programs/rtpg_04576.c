#include <stdlib.h>
int test_func(void) {
    int v0 = 77;
    int v1 = 68;
    int v2 = 20;
    int v3 = 94;
    int v4 = 73;
    int v5 = 78;
    int v6 = 5;
    int i;
    if (v1 > v3) { v1 = v3; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v3 = v3 / (v4 + 1);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
