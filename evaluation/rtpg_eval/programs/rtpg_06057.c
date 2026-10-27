#include <stdlib.h>
int __arr_6057[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 52;
    int v2 = 48;
    int i;
    v2 = v2 * 7;
    for (i = 0; i < 10; i++) { __arr_6057[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
