int test_func(void) {
    int v0 = 97;
    int v1 = 70;
    int v2 = 38;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
