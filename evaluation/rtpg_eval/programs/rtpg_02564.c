#include <stdlib.h>
int __arr_2564[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 66;
    int v2 = 84;
    int i;
    v1 = v1 * 10;
    for (i = 0; i < 10; i++) { __arr_2564[i] = v2 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
