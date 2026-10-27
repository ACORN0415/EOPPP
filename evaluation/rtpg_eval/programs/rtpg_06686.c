int __arr_6686[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 75;
    int v2 = 21;
    int v3 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_6686[i] = v3 + i; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
