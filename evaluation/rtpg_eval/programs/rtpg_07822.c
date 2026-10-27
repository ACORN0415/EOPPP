int test_func(void) {
    int v0 = 1;
    int v1 = 77;
    int v2 = 65;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
