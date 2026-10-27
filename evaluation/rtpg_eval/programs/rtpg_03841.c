#include <stdlib.h>
int test_func(void) {
    int v0 = 50;
    int v1 = 63;
    int v2 = 11;
    int v3 = 60;
    int v4 = 69;
    int i;
    if (v2 > v0) { v2 = v0; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
