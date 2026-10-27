int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 9;
    int v2 = 26;
    int v3 = 26;
    int v4 = 96;
    int v5 = 55;
    int i;
    v2 = v2 - v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
