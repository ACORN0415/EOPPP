int test_func(void) {
    int v0 = 98;
    int v1 = 82;
    int v2 = 99;
    int i;
    if (v1 > v2) { v1 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
