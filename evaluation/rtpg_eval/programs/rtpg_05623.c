int test_func(void) {
    int v0 = 57;
    int v1 = 7;
    int v2 = 96;
    int v3 = 24;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v3;
    }
    v2 = v2 + v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
