int test_func(void) {
    int v0 = 10;
    int v1 = 62;
    int v2 = 57;
    int i;
    if (v0 > v0) { v0 = v0; }
    v2 = v2 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
