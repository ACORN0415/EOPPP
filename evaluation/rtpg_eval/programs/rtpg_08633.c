#include <stdlib.h>
int test_func(void) {
    int v0 = 30;
    int v1 = 27;
    int v2 = 28;
    int v3 = 29;
    int v4 = 54;
    int v5 = 3;
    int v6 = 83;
    int v7 = 70;
    int i;
    v5 = 78;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
