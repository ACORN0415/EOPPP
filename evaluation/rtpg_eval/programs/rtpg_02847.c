int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2847[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 69;
    int v2 = 26;
    int v3 = 33;
    int v4 = 72;
    int v5 = 95;
    int v6 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_2847[i] = v6 + i; }
    v2 = 43;
    v4 = __helper(v4);
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
