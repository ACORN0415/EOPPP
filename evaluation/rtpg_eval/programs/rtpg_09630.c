int __arr_9630[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 11;
    int v2 = 1;
    int v3 = 60;
    int i;
    v2 = 69;
    for (i = 0; i < 10; i++) { __arr_9630[i] = v3 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
