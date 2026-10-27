#include <stdlib.h>
int test_func(void) {
    int v0 = 55;
    int v1 = 28;
    int v2 = 94;
    int i;
    v2 = v2 - v1;
    v2 = v2 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
