int __arr_138[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 6;
    int v2 = 54;
    int v3 = 28;
    int v4 = 75;
    int v5 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_138[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
