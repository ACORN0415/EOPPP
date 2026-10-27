#include <stdlib.h>
int test_func(void) {
    int v0 = 12;
    int v1 = 66;
    int v2 = 25;
    int i;
    v0 = v0 + v2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
