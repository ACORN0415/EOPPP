int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 64;
    int v2 = 22;
    int v3 = 65;
    int v4 = 91;
    int v5 = 10;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v4;
    }
    v0 = v0 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v4 = __arr_didx[__idx_didx[0]];
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
