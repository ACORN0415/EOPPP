int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8974[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 4;
    int v2 = 38;
    int v3 = 50;
    int v4 = 9;
    int v5 = 62;
    int v6 = 9;
    int v7 = 72;
    int i;
    v0 = v0 * 7;
    for (i = 0; i < 10; i++) { __arr_8974[i] = v7 + i; }
    v2 = v2 - v7;
    v4 = __helper(v4);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
