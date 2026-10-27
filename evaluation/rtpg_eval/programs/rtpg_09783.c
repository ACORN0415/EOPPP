int test_func(void) {
    int v0 = 64;
    int v1 = 8;
    int v2 = 8;
    int v3 = 26;
    int i;
    v0 = v0 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
