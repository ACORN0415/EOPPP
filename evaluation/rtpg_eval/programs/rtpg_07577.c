#include <stdlib.h>
int test_func(void) {
    int v0 = 0;
    int v1 = 98;
    int v2 = 91;
    int v3 = 82;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v2;
    }
    v2 = 51;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
