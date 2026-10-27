int test_func(void) {
    int v0 = 33;
    int v1 = 73;
    int v2 = 58;
    int v3 = 36;
    int v4 = 65;
    int v5 = 80;
    int v6 = 26;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
