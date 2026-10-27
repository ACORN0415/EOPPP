#include <stdlib.h>
int __arr_9508[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 94;
    int v2 = 85;
    int i;
    for (i = 0; i < 10; i++) { __arr_9508[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
