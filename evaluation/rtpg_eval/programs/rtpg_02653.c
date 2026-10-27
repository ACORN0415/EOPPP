int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 2;
    int v2 = 64;
    int v3 = 7;
    int v4 = 27;
    int v5 = 76;
    int v6 = 83;
    int i;
    v0 = v0 * 5;
    v1 = v1 - v2;
    v3 = 37;
    v5 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
