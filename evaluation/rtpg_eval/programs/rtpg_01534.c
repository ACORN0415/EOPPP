#include <stdlib.h>
int __arr_1534[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 85;
    int v2 = 29;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_1534[i] = v0 + i; }
    v0 = v0 + v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
