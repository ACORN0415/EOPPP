#include <stdlib.h>
int __arr_1436[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 22;
    int v2 = 36;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_1436[i] = v1 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__pm = (int *)malloc(sizeof(int) * 10);
    __pm[0] = v2;
    free(__pm);
    return v0;
}
int main(void) { return test_func(); }
