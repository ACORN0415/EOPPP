int test_func(void) {
    int v0 = 8;
    int v1 = 91;
    int v2 = 38;
    int v3 = 50;
    int v4 = 52;
    int v5 = 4;
    int v6 = 50;
    int i;
    v6 = v6 + v3;
    v1 = v1 - v5;
    if (v3 > v0) { v3 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
