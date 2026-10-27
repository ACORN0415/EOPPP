int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 75;
    int v1 = 2;
    int v2 = 15;
    int v3 = 82;
    int v4 = 81;
    int v5 = 9;
    int v6 = 100;
    int i;
    v3 = v3 - v5;
    v6 = __helper(v6);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
