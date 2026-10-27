#include <stdlib.h>
int __arr_3560[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 48;
    int v2 = 6;
    int i;
    v1 = v1 * 3;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_3560[i] = v0 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
