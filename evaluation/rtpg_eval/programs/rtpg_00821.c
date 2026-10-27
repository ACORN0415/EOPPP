int test_func(void) {
    int v0 = 96;
    int v1 = 0;
    int v2 = 57;
    int v3 = 84;
    int v4 = 11;
    int i;
    v2 = v2 * 4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
