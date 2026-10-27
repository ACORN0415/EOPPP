#include <stdlib.h>
int test_func(void) {
    int v0 = 74;
    int v1 = 26;
    int v2 = 82;
    int v3 = 9;
    int v4 = 15;
    int i;
    v4 = v4 - v1;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
