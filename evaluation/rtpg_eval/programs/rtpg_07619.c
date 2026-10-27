int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 16;
    int v2 = 43;
    int v3 = 32;
    int v4 = 56;
    int v5 = 78;
    int v6 = 75;
    int i;
    v5 = v5 * 10;
    v2 = v2 - v6;
    v6 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
