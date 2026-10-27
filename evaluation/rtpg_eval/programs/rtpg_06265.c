int test_func(void) {
    int v0 = 48;
    int v1 = 61;
    int v2 = 91;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v0;
    }
    v0 = 59;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
