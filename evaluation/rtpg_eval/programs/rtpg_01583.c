#include <stdlib.h>
int test_func(void) {
    int v0 = 70;
    int v1 = 22;
    int v2 = 5;
    int v3 = 98;
    int v4 = 57;
    int i;
    if (v0 > v0) { v0 = v0; }
    v0 = v0 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
