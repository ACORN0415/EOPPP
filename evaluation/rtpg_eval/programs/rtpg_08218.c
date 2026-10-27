int test_func(void) {
    int v0 = 71;
    int v1 = 93;
    int v2 = 46;
    int i;
    v1 = v1 * 4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
