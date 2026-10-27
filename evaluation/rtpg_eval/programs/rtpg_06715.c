int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 88;
    int v2 = 17;
    int v3 = 87;
    int v4 = 24;
    int v5 = 10;
    int v6 = 98;
    int v7 = 62;
    int i;
    if (v1 > v7) { v1 = v7; }
    for (i = 0; i < 14; i++) {
        v0 = v0 + v6;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
