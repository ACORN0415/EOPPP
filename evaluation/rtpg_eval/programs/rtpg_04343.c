int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 20;
    int v1 = 100;
    int v2 = 76;
    int i;
    v2 = 36;
    v2 = v2 * 7;
    v0 = __helper(v0);
    v0 = v0 ^ v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
