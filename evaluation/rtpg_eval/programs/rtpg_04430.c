int test_func(void) {
    int v0 = 40;
    int v1 = 67;
    int v2 = 88;
    int i;
    v1 = 34;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v2;
    }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
