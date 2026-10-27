int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 26;
    int v1 = 25;
    int v2 = 75;
    int v3 = 39;
    int v4 = 19;
    int i;
    v4 = 42;
    v0 = __helper(v0);
    v0 = v0 | v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
