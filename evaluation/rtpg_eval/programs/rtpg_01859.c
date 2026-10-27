int __arr_1859[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 17;
    int v2 = 24;
    int v3 = 71;
    int v4 = 52;
    int i;
    v2 = v2 * 10;
    for (i = 0; i < 10; i++) { __arr_1859[i] = v2 + i; }
    for (i = 0; i < 10; i++) {
        v1 = v1 + v1;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
