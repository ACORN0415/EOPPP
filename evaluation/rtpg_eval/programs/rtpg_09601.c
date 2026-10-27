int test_func(void) {
    int v0 = 71;
    int v1 = 80;
    int v2 = 11;
    int v3 = 55;
    int v4 = 29;
    int v5 = 92;
    int i;
    v0 = v0 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
