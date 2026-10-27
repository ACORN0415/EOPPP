int __arr_2078[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 67;
    int v2 = 51;
    int v3 = 38;
    int v4 = 13;
    int v5 = 23;
    int v6 = 62;
    int v7 = 16;
    int i;
    for (i = 0; i < 12; i++) {
        v5 = v5 + v3;
    }
    if (v6 > v1) { v6 = v1; }
    for (i = 0; i < 10; i++) { __arr_2078[i] = v5 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    v4 = v4 / (v2 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
