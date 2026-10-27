int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 42;
    int v1 = 39;
    int v2 = 56;
    int v3 = 78;
    int v4 = 83;
    int v5 = 88;
    int i;
    v4 = v4 * 7;
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
