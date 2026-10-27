int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 33;
    int v2 = 55;
    int v3 = 100;
    int v4 = 33;
    int v5 = 96;
    int v6 = 43;
    int v7 = 94;
    int i;
    v1 = v1 - v5;
    v1 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
