#include <stdlib.h>
int test_func(void) {
    int v0 = 85;
    int v1 = 3;
    int v2 = 43;
    int v3 = 52;
    int v4 = 23;
    int i;
    v1 = v1 * 5;
    v2 = 57;
    v4 = v4 - v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
