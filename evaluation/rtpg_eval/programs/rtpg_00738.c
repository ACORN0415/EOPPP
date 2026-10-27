#include <stdlib.h>
int test_func(void) {
    int v0 = 66;
    int v1 = 1;
    int v2 = 1;
    int v3 = 30;
    int v4 = 20;
    int v5 = 89;
    int v6 = 78;
    int i;
    if (v1 > v2) { v1 = v2; }
    v1 = 36;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v4;
    free(__pm);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
