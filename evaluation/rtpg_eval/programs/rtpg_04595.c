#include <stdlib.h>
int test_func(void) {
    int v0 = 47;
    int v1 = 92;
    int v2 = 71;
    int v3 = 47;
    int v4 = 97;
    int v5 = 58;
    int i;
    v2 = v2 + v5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
