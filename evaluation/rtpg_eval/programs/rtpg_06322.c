#include <stdlib.h>
int test_func(void) {
    int v0 = 45;
    int v1 = 16;
    int v2 = 65;
    int v3 = 73;
    int i;
    v1 = 26;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
