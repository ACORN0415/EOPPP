#include <stdlib.h>
int test_func(void) {
    int v0 = 7;
    int v1 = 72;
    int v2 = 25;
    int i;
    if (v2 > v2) { v2 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
