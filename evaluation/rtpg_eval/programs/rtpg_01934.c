#include <stdlib.h>
int test_func(void) {
    int v0 = 48;
    int v1 = 27;
    int v2 = 37;
    int i;
    v2 = v2 * 4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
