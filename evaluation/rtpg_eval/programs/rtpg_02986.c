int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 75;
    int v1 = 37;
    int v2 = 42;
    int v3 = 62;
    int v4 = 15;
    int v5 = 45;
    int i;
    v0 = v0 * 5;
    v3 = __helper(v3);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
