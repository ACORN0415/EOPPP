#include <stdlib.h>
int test_func(void) {
    int v0 = 46;
    int v1 = 60;
    int v2 = 39;
    int v3 = 42;
    int i;
    v0 = v0 - v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v3;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
