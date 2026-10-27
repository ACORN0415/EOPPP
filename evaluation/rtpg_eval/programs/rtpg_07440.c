int test_func(void) {
    int v0 = 62;
    int v1 = 13;
    int v2 = 84;
    int v3 = 81;
    int v4 = 39;
    int v5 = 24;
    int i;
    v3 = v3 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
