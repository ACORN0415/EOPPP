#include <stdlib.h>
int test_func(void) {
    int v0 = 30;
    int v1 = 53;
    int v2 = 48;
    int v3 = 83;
    int v4 = 13;
    int v5 = 54;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
