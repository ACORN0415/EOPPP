int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 55;
    int v2 = 56;
    int v3 = 46;
    int v4 = 10;
    int v5 = 26;
    int v6 = 18;
    int i;
    v5 = v5 * 2;
    if (v1 > v6) { v1 = v6; }
    v3 = 3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
