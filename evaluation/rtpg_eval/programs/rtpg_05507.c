int test_func(void) {
    int v0 = 97;
    int v1 = 98;
    int v2 = 35;
    int v3 = 38;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
