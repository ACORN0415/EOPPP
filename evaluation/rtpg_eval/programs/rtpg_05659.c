int test_func(void) {
    int v0 = 82;
    int v1 = 73;
    int v2 = 22;
    int v3 = 34;
    int v4 = 73;
    int v5 = 4;
    int v6 = 65;
    int i;
    if (v2 > v2) { v2 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
