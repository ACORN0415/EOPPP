#include <stdlib.h>
int test_func(void) {
    int v0 = 51;
    int v1 = 93;
    int v2 = 97;
    int v3 = 69;
    int v4 = 7;
    int i;
    v1 = 13;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
