int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 7;
    int v1 = 30;
    int v2 = 44;
    int v3 = 89;
    int v4 = 42;
    int v5 = 61;
    int i;
    v0 = v0 + v3;
    v4 = 89;
    v5 = v5 | v0;
    v3 = __helper(v3);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
