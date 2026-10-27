int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 37;
    int v2 = 52;
    int v3 = 57;
    int v4 = 23;
    int v5 = 83;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
