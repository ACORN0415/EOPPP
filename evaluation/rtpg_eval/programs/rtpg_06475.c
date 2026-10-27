int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 63;
    int v1 = 7;
    int v2 = 49;
    int v3 = 25;
    int v4 = 22;
    int v5 = 87;
    int v6 = 47;
    int v7 = 45;
    int i;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v2;
    }
    v4 = __helper(v4);
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
