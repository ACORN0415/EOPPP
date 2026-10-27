int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 44;
    int v2 = 5;
    int v3 = 35;
    int v4 = 18;
    int i;
    v3 = 54;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
