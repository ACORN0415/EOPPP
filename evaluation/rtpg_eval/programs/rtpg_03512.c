#include <stdlib.h>
int test_func(void) {
    int v0 = 98;
    int v1 = 54;
    int v2 = 60;
    int v3 = 54;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
