int test_func(void) {
    int v0 = 30;
    int v1 = 51;
    int v2 = 10;
    int v3 = 30;
    int v4 = 79;
    int v5 = 34;
    int i;
    v4 = v4 * 2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
