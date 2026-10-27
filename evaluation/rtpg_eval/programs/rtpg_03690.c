int __arr_3690[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 25;
    int v2 = 70;
    int v3 = 26;
    int v4 = 96;
    int v5 = 94;
    int i;
    v3 = 22;
    for (i = 0; i < 10; i++) { __arr_3690[i] = v3 + i; }
    v2 = v2 * 2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
