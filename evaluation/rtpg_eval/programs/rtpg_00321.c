#include <stdlib.h>
int test_func(void) {
    int v0 = 68;
    int v1 = 92;
    int v2 = 93;
    int v3 = 89;
    int v4 = 60;
    int i;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
