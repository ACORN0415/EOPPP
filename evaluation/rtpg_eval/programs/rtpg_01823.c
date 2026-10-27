int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1823[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 20;
    int v2 = 94;
    int v3 = 93;
    int v4 = 55;
    int v5 = 20;
    int v6 = 89;
    int v7 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_1823[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v0 = __helper(v0);
    v0 = v0 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
