int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 34;
    int v1 = 12;
    int v2 = 74;
    int v3 = 29;
    int i;
    v2 = v2 * 8;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
