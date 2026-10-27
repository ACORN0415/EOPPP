int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 74;
    int v2 = 90;
    int v3 = 29;
    int i;
    if (v2 > v1) { v2 = v1; }
    v2 = v2 - v3;
    v0 = v0 * 3;
    v3 = __helper(v3);
    v0 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
