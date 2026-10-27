int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4997[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 39;
    int v2 = 68;
    int v3 = 87;
    int v4 = 79;
    int v5 = 2;
    int v6 = 89;
    int i;
    v4 = v4 + v5;
    for (i = 0; i < 10; i++) { __arr_4997[i] = v0 + i; }
    v4 = v4 * 10;
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
