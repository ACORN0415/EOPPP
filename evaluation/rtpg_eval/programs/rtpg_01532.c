int test_func(void) {
    int v0 = 45;
    int v1 = 46;
    int v2 = 52;
    int v3 = 48;
    int v4 = 74;
    int v5 = 67;
    int v6 = 22;
    int i;
    v1 = 38;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
