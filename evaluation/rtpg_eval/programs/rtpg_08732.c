int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 53;
    int v1 = 56;
    int v2 = 84;
    int v3 = 44;
    int v4 = 70;
    int v5 = 31;
    int v6 = 66;
    int v7 = 56;
    int i;
    v4 = v4 * 6;
    v0 = v0 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
