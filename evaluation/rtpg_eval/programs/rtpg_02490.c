int test_func(void) {
    int v0 = 99;
    int v1 = 30;
    int v2 = 73;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v0 = v0 | v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
