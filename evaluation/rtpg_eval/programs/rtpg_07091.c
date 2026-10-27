int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 58;
    int v2 = 65;
    int v3 = 51;
    int v4 = 24;
    int v5 = 72;
    int v6 = 63;
    int v7 = 85;
    int i;
    v5 = 15;
    v2 = v2 - v5;
    v1 = v1 * 6;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
