#include <stdlib.h>
int test_func(void) {
    int v0 = 31;
    int v1 = 43;
    int v2 = 48;
    int i;
    v2 = 83;
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
