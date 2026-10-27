#include <stdlib.h>
int test_func(void) {
    int v0 = 7;
    int v1 = 24;
    int v2 = 66;
    int v3 = 34;
    int v4 = 74;
    int v5 = 82;
    int i;
    v1 = 90;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
