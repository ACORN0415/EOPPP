#include <stdlib.h>
int test_func(void) {
    int v0 = 65;
    int v1 = 74;
    int v2 = 2;
    int v3 = 68;
    int v4 = 63;
    int i;
    v1 = v1 * 4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
