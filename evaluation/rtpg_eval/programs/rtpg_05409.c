int test_func(void) {
    int v0 = 0;
    int v1 = 75;
    int v2 = 29;
    int v3 = 44;
    int v4 = 14;
    int v5 = 76;
    int v6 = 40;
    int i;
    if (v1 > v4) { v1 = v4; }
    v1 = v1 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
