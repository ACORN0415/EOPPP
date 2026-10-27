#include <stdlib.h>
int __arr_7513[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 81;
    int v2 = 97;
    int v3 = 39;
    int v4 = 61;
    int v5 = 36;
    int i;
    v2 = v2 - v5;
    for (i = 0; i < 10; i++) { __arr_7513[i] = v5 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
