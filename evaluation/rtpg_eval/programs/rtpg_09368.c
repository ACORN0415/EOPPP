int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 90;
    int v1 = 9;
    int v2 = 73;
    int i;
    v2 = v2 * 9;
    v2 = __helper(v2);
    v2 = v2 / (v1 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
