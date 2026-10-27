int test_func(void) {
    int v0 = 68;
    int v1 = 78;
    int v2 = 33;
    int v3 = 38;
    int v4 = 33;
    int v5 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v3;
    }
    v5 = v5 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
