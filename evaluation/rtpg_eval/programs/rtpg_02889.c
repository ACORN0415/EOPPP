int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2889[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 23;
    int v2 = 26;
    int v3 = 69;
    int v4 = 65;
    int v5 = 8;
    int v6 = 16;
    int v7 = 88;
    int i;
    for (i = 0; i < 10; i++) { __arr_2889[i] = v6 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v6 = __helper(v6);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
