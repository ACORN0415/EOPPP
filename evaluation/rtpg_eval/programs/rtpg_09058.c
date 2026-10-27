int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 87;
    int v2 = 99;
    int v3 = 8;
    int v4 = 36;
    int v5 = 25;
    int v6 = 19;
    int i;
    v1 = v1 + v3;
    v5 = __helper(v5);
    v0 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
