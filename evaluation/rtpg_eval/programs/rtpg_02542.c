int test_func(void) {
    int v0 = 48;
    int v1 = 99;
    int v2 = 17;
    int v3 = 94;
    int v4 = 53;
    int v5 = 27;
    int i;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
