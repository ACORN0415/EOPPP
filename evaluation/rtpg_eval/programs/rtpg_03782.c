#include <stdlib.h>
int test_func(void) {
    int v0 = 28;
    int v1 = 13;
    int v2 = 24;
    int v3 = 35;
    int i;
    v1 = v1 + v0;
    v3 = 70;
    v3 = v3 % (v2 + 1);
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
