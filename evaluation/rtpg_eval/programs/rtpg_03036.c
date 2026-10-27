int test_func(void) {
    int v0 = 1;
    int v1 = 7;
    int v2 = 9;
    int v3 = 88;
    int v4 = 3;
    int v5 = 57;
    int i;
    v2 = v2 + v3;
    v0 = 25;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
