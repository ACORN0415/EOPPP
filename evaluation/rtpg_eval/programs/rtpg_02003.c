int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 60;
    int v2 = 64;
    int v3 = 64;
    int v4 = 48;
    int v5 = 22;
    int i;
    if (v2 > v2) { v2 = v2; }
    for (i = 0; i < 12; i++) {
        v3 = v3 + v5;
    }
    v1 = v1 * 5;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v5 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
