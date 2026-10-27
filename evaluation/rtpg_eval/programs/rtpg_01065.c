#include <stdlib.h>
int test_func(void) {
    int v0 = 66;
    int v1 = 73;
    int v2 = 92;
    int i;
    v2 = 78;
    v1 = v1 * 2;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
