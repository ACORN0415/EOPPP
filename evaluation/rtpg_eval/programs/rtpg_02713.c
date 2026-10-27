int test_func(void) {
    int v0 = 11;
    int v1 = 14;
    int v2 = 39;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v1;
    }
    v0 = v0 * 7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
