int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 33;
    int v2 = 13;
    int v3 = 71;
    int v4 = 18;
    int v5 = 40;
    int v6 = 34;
    int i;
    if (v0 > v4) { v0 = v4; }
    v5 = v5 + v6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
