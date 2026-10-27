#include <stdlib.h>
int test_func(void) {
    int v0 = 29;
    int v1 = 65;
    int v2 = 13;
    int i;
    v2 = 68;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
