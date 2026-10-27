#include <stdlib.h>
int test_func(void) {
    int v0 = 47;
    int v1 = 90;
    int v2 = 94;
    int v3 = 66;
    int v4 = 5;
    int v5 = 70;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
