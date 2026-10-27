int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5198[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 65;
    int v2 = 32;
    int v3 = 80;
    int v4 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_5198[i] = v3 + i; }
    v0 = __helper(v0);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
