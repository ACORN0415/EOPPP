int test_func(void) {
    int v0 = 15;
    int v1 = 72;
    int v2 = 71;
    int v3 = 79;
    int v4 = 87;
    int i;
    v0 = 48;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
