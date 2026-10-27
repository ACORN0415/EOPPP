#include <stdlib.h>
int __arr_9728[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 28;
    int v2 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_9728[i] = v0 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
