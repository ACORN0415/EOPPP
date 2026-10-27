int __arr_6919[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 16;
    int v1 = 8;
    int v2 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_6919[i] = v2 + i; }
    v0 = v0 + v1;
    v1 = v1 - v2;
    v0 = __arr_didx[__idx_didx[0]];
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
