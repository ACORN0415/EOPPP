#include <stdlib.h>
int test_func(void) {
    int v0 = 65;
    int v1 = 39;
    int v2 = 36;
    int v3 = 83;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v1;
    }
    if (v1 > v2) { v1 = v2; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
