int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 48;
    int v2 = 8;
    int v3 = 22;
    int v4 = 45;
    int v5 = 69;
    int v6 = 82;
    int i;
    v5 = v5 + v1;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
