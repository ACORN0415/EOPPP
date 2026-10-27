int test_func(void) {
    int v0 = 43;
    int v1 = 17;
    int v2 = 42;
    int v3 = 70;
    int v4 = 38;
    int v5 = 60;
    int i;
    if (v4 > v0) { v4 = v0; }
    for (i = 0; i < 16; i++) {
        v3 = v3 + v0;
    }
    v4 = v4 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
