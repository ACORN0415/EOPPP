int test_func(void) {
    int v0 = 77;
    int v1 = 22;
    int v2 = 32;
    int v3 = 85;
    int v4 = 81;
    int v5 = 87;
    int i;
    v3 = 74;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
