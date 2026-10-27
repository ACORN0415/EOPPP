#include <stdlib.h>
int test_func(void) {
    int v0 = 56;
    int v1 = 26;
    int v2 = 21;
    int v3 = 68;
    int v4 = 12;
    int v5 = 45;
    int v6 = 74;
    int i;
    v5 = 27;
    v6 = v6 + v1;
    for (i = 0; i < 19; i++) {
        v5 = v5 + v2;
    }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
