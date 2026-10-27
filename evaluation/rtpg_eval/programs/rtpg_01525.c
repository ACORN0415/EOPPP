int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1525[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 57;
    int v2 = 27;
    int v3 = 42;
    int v4 = 44;
    int v5 = 22;
    int i;
    v4 = v4 * 6;
    v2 = 76;
    for (i = 0; i < 10; i++) { __arr_1525[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
