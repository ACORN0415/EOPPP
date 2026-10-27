int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 26;
    int v1 = 0;
    int v2 = 10;
    int v3 = 62;
    int v4 = 56;
    int v5 = 64;
    int i;
    if (v1 > v5) { v1 = v5; }
    v2 = 66;
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
