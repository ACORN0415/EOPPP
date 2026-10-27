int test_func(void) {
    int v0 = 46;
    int v1 = 33;
    int v2 = 86;
    int v3 = 48;
    int v4 = 29;
    int v5 = 50;
    int v6 = 3;
    int i;
    v2 = v2 * 3;
    if (v4 > v3) { v4 = v3; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
