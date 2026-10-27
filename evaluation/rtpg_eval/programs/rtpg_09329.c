int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 14;
    int v2 = 53;
    int v3 = 51;
    int v4 = 95;
    int v5 = 88;
    int i;
    v3 = 4;
    v4 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
