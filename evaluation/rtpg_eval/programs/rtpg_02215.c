#include <stdlib.h>
int __arr_2215[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 62;
    int v2 = 22;
    int v3 = 62;
    int v4 = 19;
    int i;
    for (i = 0; i < 10; i++) { __arr_2215[i] = v2 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    v2 = v2 / (v3 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
