int test_func(void) {
    int v0 = 13;
    int v1 = 76;
    int v2 = 91;
    int v3 = 35;
    int v4 = 38;
    int v5 = 45;
    int v6 = 46;
    int i;
    v4 = v4 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
