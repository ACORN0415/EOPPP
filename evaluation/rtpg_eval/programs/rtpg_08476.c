#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 95;
    int v2 = 8;
    int v3 = 25;
    int v4 = 74;
    int v5 = 96;
    int i;
    if (v2 > v2) { v2 = v2; }
    v5 = v5 - v4;
    v0 = v0 * 7;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
