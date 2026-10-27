#include <stdlib.h>
int __arr_2674[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 44;
    int v2 = 43;
    int v3 = 20;
    int v4 = 44;
    int v5 = 84;
    int v6 = 44;
    int v7 = 42;
    int i;
    for (i = 0; i < 10; i++) { __arr_2674[i] = v5 + i; }
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v7;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
