#include <stdlib.h>
int test_func(void) {
    int v0 = 25;
    int v1 = 26;
    int v2 = 6;
    int v3 = 60;
    int v4 = 58;
    int v5 = 43;
    int i;
    v0 = v0 + v0;
    v3 = 26;
    v4 = v4 - v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
