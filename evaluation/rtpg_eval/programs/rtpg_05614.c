#include <stdlib.h>
int test_func(void) {
    int v0 = 74;
    int v1 = 7;
    int v2 = 9;
    int v3 = 100;
    int v4 = 100;
    int v5 = 89;
    int i;
    v0 = 73;
    v3 = v3 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
