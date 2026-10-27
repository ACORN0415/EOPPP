int test_func(void) {
    int v0 = 49;
    int v1 = 41;
    int v2 = 26;
    int v3 = 57;
    int v4 = 75;
    int v5 = 68;
    int v6 = 92;
    int i;
    v4 = 47;
    v1 = v1 - v4;
    if (v3 > v6) { v3 = v6; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
