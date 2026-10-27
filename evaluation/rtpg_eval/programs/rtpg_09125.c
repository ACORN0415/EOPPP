int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 2;
    int v2 = 24;
    int i;
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
