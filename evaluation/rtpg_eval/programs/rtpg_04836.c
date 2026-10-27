int test_func(void) {
    int v0 = 17;
    int v1 = 12;
    int v2 = 100;
    int i;
    v0 = v0 - v2;
    if (v0 > v1) { v0 = v1; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
