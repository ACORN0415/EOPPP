int __arr_3505[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 52;
    int v2 = 23;
    int v3 = 0;
    int v4 = 62;
    int v5 = 38;
    int v6 = 89;
    int i;
    for (i = 0; i < 10; i++) { __arr_3505[i] = v0 + i; }
    v4 = v4 + v1;
    v6 = v6 - v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v2 = v2 ^ v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
