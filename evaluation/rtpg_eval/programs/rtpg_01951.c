int test_func(void) {
    int v0 = 65;
    int v1 = 6;
    int v2 = 96;
    int v3 = 1;
    int v4 = 40;
    int v5 = 75;
    int v6 = 24;
    int v7 = 62;
    int i;
    v2 = v2 * 5;
    v3 = v3 + v5;
    v4 = v4 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
