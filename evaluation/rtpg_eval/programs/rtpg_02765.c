int test_func(void) {
    int v0 = 85;
    int v1 = 31;
    int v2 = 40;
    int v3 = 96;
    int v4 = 100;
    int i;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v3;
    }
    v1 = v1 * 2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
