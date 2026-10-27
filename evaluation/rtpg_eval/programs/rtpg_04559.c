#include <stdlib.h>
int __arr_4559[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 7;
    int v2 = 40;
    int v3 = 8;
    int v4 = 60;
    int i;
    v2 = v2 + v0;
    for (i = 0; i < 10; i++) { __arr_4559[i] = v1 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    v0 = v0 | v2;
    return v0;
}
int main(void) { return test_func(); }
