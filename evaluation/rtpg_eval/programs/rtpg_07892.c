int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 94;
    int v1 = 42;
    int v2 = 82;
    int v3 = 42;
    int v4 = 88;
    int v5 = 26;
    int v6 = 53;
    int v7 = 94;
    int i;
    if (v1 > v6) { v1 = v6; }
    v2 = v2 - v7;
    v6 = __helper(v6);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
