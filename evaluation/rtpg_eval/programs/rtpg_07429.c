int test_func(void) {
    int v0 = 42;
    int v1 = 52;
    int v2 = 73;
    int i;
    v1 = v1 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v2 = v2 & v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
