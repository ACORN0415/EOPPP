int test_func(void) {
    int v0 = 77;
    int v1 = 18;
    int v2 = 57;
    int v3 = 1;
    int v4 = 53;
    int i;
    if (v1 > v2) { v1 = v2; }
    v2 = 51;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v3 = v3 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
