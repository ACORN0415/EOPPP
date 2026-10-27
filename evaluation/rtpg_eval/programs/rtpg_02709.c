int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 93;
    int v1 = 85;
    int v2 = 32;
    int v3 = 89;
    int v4 = 80;
    int v5 = 35;
    int v6 = 30;
    int i;
    v4 = v4 - v0;
    v4 = v4 * 7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
