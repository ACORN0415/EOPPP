int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 63;
    int v2 = 84;
    int v3 = 1;
    int v4 = 18;
    int v5 = 45;
    int i;
    if (v3 > v4) { v3 = v4; }
    v0 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
