int test_func(void) {
    int v0 = 80;
    int v1 = 79;
    int v2 = 72;
    int v3 = 53;
    int v4 = 30;
    int v5 = 1;
    int v6 = 87;
    int v7 = 28;
    int i;
    if (v2 > v0) { v2 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
