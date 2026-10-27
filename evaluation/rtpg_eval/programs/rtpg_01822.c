int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 94;
    int v2 = 7;
    int v3 = 43;
    int v4 = 56;
    int v5 = 91;
    int v6 = 5;
    int v7 = 88;
    int i;
    v3 = __helper(v3);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
