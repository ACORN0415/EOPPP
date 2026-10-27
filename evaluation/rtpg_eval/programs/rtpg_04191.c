#include <stdlib.h>
int __arr_4191[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 40;
    int v2 = 11;
    int v3 = 47;
    int v4 = 19;
    int i;
    for (i = 0; i < 10; i++) { __arr_4191[i] = v3 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
