int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 70;
    int v1 = 39;
    int v2 = 44;
    int v3 = 32;
    int v4 = 79;
    int v5 = 15;
    int i;
    v4 = v4 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
