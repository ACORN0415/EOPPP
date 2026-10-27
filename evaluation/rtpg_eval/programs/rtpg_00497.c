int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 72;
    int v2 = 69;
    int v3 = 3;
    int v4 = 82;
    int v5 = 35;
    int v6 = 17;
    int v7 = 52;
    int i;
    v2 = v2 * 9;
    v7 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
