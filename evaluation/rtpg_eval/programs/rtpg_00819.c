#include <stdlib.h>
int test_func(void) {
    int v0 = 65;
    int v1 = 35;
    int v2 = 59;
    int i;
    v2 = v2 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
