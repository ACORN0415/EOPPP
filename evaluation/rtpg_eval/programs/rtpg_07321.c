int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 82;
    int v2 = 7;
    int v3 = 53;
    int v4 = 11;
    int v5 = 24;
    int i;
    v5 = 41;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    v1 = v1 / (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
