int test_func(void) {
    int v0 = 73;
    int v1 = 57;
    int v2 = 16;
    int v3 = 35;
    int v4 = 89;
    int i;
    v2 = 34;
    v2 = v2 * 10;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
