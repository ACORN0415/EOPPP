#include <stdlib.h>
int __arr_7134[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 78;
    int v2 = 21;
    int v3 = 69;
    int i;
    for (i = 0; i < 10; i++) { __arr_7134[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v0;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
