int test_func(void) {
    int v0 = 47;
    int v1 = 12;
    int v2 = 94;
    int v3 = 50;
    int v4 = 48;
    int i;
    v2 = v2 + v4;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
