#include <stdlib.h>
int test_func(void) {
    int v0 = 29;
    int v1 = 70;
    int v2 = 18;
    int v3 = 5;
    int i;
    v2 = 19;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
