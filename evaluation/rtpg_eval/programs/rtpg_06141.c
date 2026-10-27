int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 86;
    int v2 = 40;
    int v3 = 29;
    int i;
    v3 = v3 * 3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
