int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 62;
    int v2 = 14;
    int v3 = 76;
    int i;
    v0 = 10;
    v2 = v2 / (v0 + 1);
    v1 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
