int test_func(void) {
    int v0 = 60;
    int v1 = 72;
    int v2 = 25;
    int v3 = 49;
    int v4 = 83;
    int v5 = 90;
    int v6 = 40;
    int v7 = 81;
    int i;
    v1 = v1 + v7;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
