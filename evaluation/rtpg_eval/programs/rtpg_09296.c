int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 41;
    int v1 = 11;
    int v2 = 47;
    int v3 = 85;
    int v4 = 51;
    int v5 = 68;
    int v6 = 14;
    int v7 = 88;
    int i;
    for (i = 0; i < 20; i++) {
        v5 = v5 + v7;
    }
    if (v2 > v4) { v2 = v4; }
    v3 = v3 + v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
