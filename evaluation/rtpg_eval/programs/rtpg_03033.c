int __arr_3033[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 100;
    int v2 = 55;
    int v3 = 36;
    int v4 = 72;
    int v5 = 43;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_3033[i] = v2 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
