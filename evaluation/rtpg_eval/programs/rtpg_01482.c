int test_func(void) {
    int v0 = 72;
    int v1 = 28;
    int v2 = 44;
    int v3 = 41;
    int i;
    v0 = v0 + v0;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
