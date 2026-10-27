int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 83;
    int v2 = 96;
    int v3 = 7;
    int v4 = 79;
    int v5 = 96;
    int v6 = 49;
    int i;
    if (v5 > v0) { v5 = v0; }
    v6 = v6 * 5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    v4 = __helper(v4);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
