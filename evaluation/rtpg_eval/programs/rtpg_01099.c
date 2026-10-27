int test_func(void) {
    int v0 = 80;
    int v1 = 98;
    int v2 = 62;
    int v3 = 5;
    int i;
    v2 = v2 * 9;
    if (v0 > v2) { v0 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
