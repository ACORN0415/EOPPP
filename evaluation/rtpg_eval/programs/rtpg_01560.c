int test_func(void) {
    int v0 = 70;
    int v1 = 27;
    int v2 = 1;
    int v3 = 34;
    int v4 = 80;
    int v5 = 22;
    int i;
    if (v1 > v2) { v1 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
