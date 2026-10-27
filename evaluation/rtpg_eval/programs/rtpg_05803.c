int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 93;
    int v2 = 89;
    int v3 = 10;
    int v4 = 26;
    int v5 = 58;
    int v6 = 31;
    int i;
    v3 = 78;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v6;
    }
    v0 = v0 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    v5 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
