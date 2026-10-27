int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 3;
    int v1 = 81;
    int v2 = 71;
    int v3 = 45;
    int v4 = 13;
    int v5 = 80;
    int v6 = 75;
    int v7 = 82;
    int i;
    v1 = 10;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
