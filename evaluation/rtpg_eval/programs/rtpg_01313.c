#include <stdlib.h>
int test_func(void) {
    int v0 = 80;
    int v1 = 19;
    int v2 = 29;
    int i;
    v0 = v0 * 6;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
