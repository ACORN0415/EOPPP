#include <stdlib.h>
int __arr_4679[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 53;
    int v2 = 33;
    int v3 = 89;
    int v4 = 47;
    int i;
    v3 = v3 * 8;
    for (i = 0; i < 10; i++) { __arr_4679[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
