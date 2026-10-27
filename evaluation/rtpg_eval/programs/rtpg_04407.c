int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 12;
    int v2 = 19;
    int v3 = 44;
    int v4 = 5;
    int v5 = 93;
    int v6 = 90;
    int v7 = 77;
    int i;
    if (v5 > v3) { v5 = v3; }
    v2 = v2 * 2;
    for (i = 0; i < 7; i++) {
        v5 = v5 + v5;
    }
    v0 = __helper(v0);
    v3 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
