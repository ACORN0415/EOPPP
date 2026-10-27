int test_func(void) {
    int v0 = 91;
    int v1 = 91;
    int v2 = 16;
    int v3 = 46;
    int v4 = 19;
    int v5 = 33;
    int v6 = 56;
    int v7 = 71;
    int i;
    if (v3 > v7) { v3 = v7; }
    v2 = 53;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    v0 = v0 ^ v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
