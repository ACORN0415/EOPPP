int test_func(void) {
    int v0 = 31;
    int v1 = 36;
    int v2 = 71;
    int v3 = 29;
    int v4 = 62;
    int v5 = 89;
    int i;
    for (i = 0; i < 11; i++) {
        v5 = v5 + v4;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
