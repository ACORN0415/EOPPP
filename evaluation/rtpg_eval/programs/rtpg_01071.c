#include <stdlib.h>
int test_func(void) {
    int v0 = 24;
    int v1 = 37;
    int v2 = 19;
    int v3 = 19;
    int v4 = 49;
    int i;
    v0 = 51;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
