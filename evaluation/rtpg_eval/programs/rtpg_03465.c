int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 25;
    int v2 = 24;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 12; i++) {
        v1 = v1 + v2;
    }
    v0 = v0 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
