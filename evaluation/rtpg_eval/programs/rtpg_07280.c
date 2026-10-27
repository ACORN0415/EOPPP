#include <stdlib.h>
int test_func(void) {
    int v0 = 95;
    int v1 = 74;
    int v2 = 67;
    int v3 = 45;
    int v4 = 30;
    int v5 = 93;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v4;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v5;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
