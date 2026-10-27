int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 1;
    int v2 = 33;
    int v3 = 11;
    int v4 = 59;
    int v5 = 29;
    int i;
    v2 = 67;
    v5 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
