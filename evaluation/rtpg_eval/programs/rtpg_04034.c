#include <stdlib.h>
int __arr_4034[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 78;
    int v2 = 69;
    int i;
    v2 = v2 * 5;
    for (i = 0; i < 10; i++) { __arr_4034[i] = v0 + i; }
    v1 = v1 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
