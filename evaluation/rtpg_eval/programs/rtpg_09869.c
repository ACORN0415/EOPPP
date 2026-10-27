#include <stdlib.h>
int __arr_9869[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 34;
    int v2 = 21;
    int v3 = 75;
    int v4 = 66;
    int v5 = 52;
    int v6 = 47;
    int v7 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_9869[i] = v0 + i; }
    if (v0 > v4) { v0 = v4; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    v1 = v1 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
