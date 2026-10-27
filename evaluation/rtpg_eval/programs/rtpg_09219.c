#include <stdlib.h>
int test_func(void) {
    int v0 = 27;
    int v1 = 40;
    int v2 = 5;
    int i;
    if (v2 > v1) { v2 = v1; }
    int *__p = &v0;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
