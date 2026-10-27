int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 77;
    int v2 = 13;
    int i;
    if (v1 > v1) { v1 = v1; }
    for (i = 0; i < 16; i++) {
        v2 = v2 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
