int __arr_234[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 28;
    int v2 = 6;
    int v3 = 39;
    int v4 = 43;
    int v5 = 25;
    int v6 = 11;
    int v7 = 66;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v6;
    }
    for (i = 0; i < 10; i++) { __arr_234[i] = v0 + i; }
    v7 = v7 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
