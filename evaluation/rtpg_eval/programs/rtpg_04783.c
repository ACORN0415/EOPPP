#include <stdlib.h>
int test_func(void) {
    int v0 = 86;
    int v1 = 5;
    int v2 = 12;
    int v3 = 68;
    int v4 = 17;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
