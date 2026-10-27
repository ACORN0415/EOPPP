#include <stdlib.h>
int test_func(void) {
    int v0 = 60;
    int v1 = 20;
    int v2 = 59;
    int v3 = 35;
    int v4 = 18;
    int i;
    v4 = 13;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
