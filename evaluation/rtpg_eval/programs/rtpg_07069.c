int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 62;
    int v1 = 45;
    int v2 = 2;
    int i;
    v0 = v0 + v0;
    v1 = v1 * 8;
    v1 = v1 - v0;
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
