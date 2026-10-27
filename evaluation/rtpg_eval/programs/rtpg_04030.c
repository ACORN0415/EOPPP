#include <stdlib.h>
int test_func(void) {
    int v0 = 89;
    int v1 = 37;
    int v2 = 12;
    int v3 = 8;
    int v4 = 45;
    int i;
    v4 = v4 * 5;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
