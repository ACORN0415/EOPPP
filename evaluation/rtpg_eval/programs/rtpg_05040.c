#include <stdlib.h>
int test_func(void) {
    int v0 = 66;
    int v1 = 5;
    int v2 = 64;
    int v3 = 10;
    int v4 = 3;
    int i;
    v2 = 65;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
