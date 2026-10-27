int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 71;
    int v2 = 17;
    int i;
    v0 = v0 + v0;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v1;
    }
    v2 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
