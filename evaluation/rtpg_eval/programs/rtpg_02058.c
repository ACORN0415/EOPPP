#include <stdlib.h>
int test_func(void) {
    int v0 = 57;
    int v1 = 7;
    int v2 = 2;
    int v3 = 20;
    int v4 = 47;
    int v5 = 15;
    int v6 = 60;
    int i;
    v1 = v1 + v1;
    int *__p = &v5;
    *__p = *__p + 1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v6;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
