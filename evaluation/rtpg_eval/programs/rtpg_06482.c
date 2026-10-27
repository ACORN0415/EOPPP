#include <stdlib.h>
int test_func(void) {
    int v0 = 46;
    int v1 = 68;
    int v2 = 82;
    int v3 = 50;
    int i;
    if (v0 > v3) { v0 = v3; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    int *__p = &v1;
    *__p = *__p + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
