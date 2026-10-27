int test_func(void) {
    int v0 = 81;
    int v1 = 63;
    int v2 = 20;
    int v3 = 64;
    int i;
    v1 = v1 - v2;
    v3 = v3 * 3;
    v1 = v1 % (v3 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
