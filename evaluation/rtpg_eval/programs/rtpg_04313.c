int test_func(void) {
    int v0 = 59;
    int v1 = 1;
    int v2 = 49;
    int v3 = 1;
    int i;
    v0 = v0 - v3;
    v1 = v1 * 7;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
