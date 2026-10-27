#include <stdlib.h>
int test_func(void) {
    int v0 = 53;
    int v1 = 28;
    int v2 = 63;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
