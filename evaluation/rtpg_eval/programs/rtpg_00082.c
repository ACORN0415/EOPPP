int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 85;
    int v1 = 12;
    int v2 = 75;
    int v3 = 29;
    int v4 = 2;
    int v5 = 11;
    int v6 = 42;
    int v7 = 60;
    int i;
    v6 = 29;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    v2 = __helper(v2);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
