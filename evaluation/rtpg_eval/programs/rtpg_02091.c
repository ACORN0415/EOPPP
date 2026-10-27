int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 24;
    int v2 = 54;
    int v3 = 83;
    int v4 = 43;
    int v5 = 29;
    int i;
    v4 = v4 + v0;
    v0 = 23;
    v5 = v5 - v4;
    v0 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
