int __arr_6620[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 53;
    int v2 = 35;
    int v3 = 42;
    int i;
    for (i = 0; i < 10; i++) { __arr_6620[i] = v3 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
