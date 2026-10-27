int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 16;
    int v1 = 47;
    int v2 = 23;
    int v3 = 46;
    int v4 = 52;
    int v5 = 4;
    int v6 = 76;
    int v7 = 34;
    int i;
    v2 = 21;
    v1 = v1 + v5;
    v7 = v7 * 2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
