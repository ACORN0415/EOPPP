#include <stdlib.h>
int __arr_6614[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 95;
    int v2 = 36;
    int i;
    v0 = v0 + v0;
    v1 = 8;
    for (i = 0; i < 10; i++) { __arr_6614[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
