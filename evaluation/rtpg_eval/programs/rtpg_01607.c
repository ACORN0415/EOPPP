int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 64;
    int v1 = 59;
    int v2 = 9;
    int v3 = 64;
    int v4 = 76;
    int v5 = 64;
    int v6 = 78;
    int v7 = 59;
    int i;
    v7 = v7 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
