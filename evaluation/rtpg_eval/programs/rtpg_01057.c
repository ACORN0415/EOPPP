#include <stdlib.h>
int test_func(void) {
    int v0 = 9;
    int v1 = 26;
    int v2 = 71;
    int v3 = 79;
    int v4 = 57;
    int i;
    v1 = v1 + v0;
    v3 = 41;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
