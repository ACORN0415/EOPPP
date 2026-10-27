#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 62;
    int v2 = 84;
    int v3 = 69;
    int v4 = 26;
    int v5 = 80;
    int v6 = 7;
    int i;
    v4 = 69;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
