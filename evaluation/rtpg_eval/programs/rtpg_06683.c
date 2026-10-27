int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 35;
    int v2 = 88;
    int v3 = 3;
    int v4 = 26;
    int v5 = 95;
    int i;
    v5 = v5 + v5;
    v2 = 33;
    v5 = __helper(v5);
    v5 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
