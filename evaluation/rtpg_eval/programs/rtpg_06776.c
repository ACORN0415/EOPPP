int test_func(void) {
    int v0 = 48;
    int v1 = 50;
    int v2 = 7;
    int v3 = 38;
    int v4 = 5;
    int v5 = 99;
    int i;
    v2 = 10;
    if (v3 > v0) { v3 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
