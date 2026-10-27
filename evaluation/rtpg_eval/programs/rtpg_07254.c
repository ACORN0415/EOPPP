#include <stdlib.h>
int test_func(void) {
    int v0 = 36;
    int v1 = 16;
    int v2 = 78;
    int v3 = 53;
    int v4 = 5;
    int v5 = 27;
    int i;
    v3 = v3 - v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
