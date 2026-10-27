int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 38;
    int v2 = 79;
    int v3 = 36;
    int v4 = 98;
    int v5 = 47;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v4;
    }
    if (v1 > v4) { v1 = v4; }
    v3 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
