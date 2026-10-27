int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 43;
    int v2 = 9;
    int i;
    v1 = v1 - v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v1 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
