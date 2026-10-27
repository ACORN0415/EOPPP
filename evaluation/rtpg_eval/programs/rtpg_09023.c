#include <stdlib.h>
int test_func(void) {
    int v0 = 51;
    int v1 = 38;
    int v2 = 26;
    int v3 = 71;
    int v4 = 96;
    int v5 = 25;
    int v6 = 65;
    int i;
    v1 = 85;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
