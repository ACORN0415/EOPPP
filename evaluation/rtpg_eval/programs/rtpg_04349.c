#include <stdlib.h>
int test_func(void) {
    int v0 = 62;
    int v1 = 87;
    int v2 = 38;
    int v3 = 32;
    int v4 = 82;
    int i;
    v4 = 88;
    v4 = v4 - v3;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v1;
    free(__pm);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
