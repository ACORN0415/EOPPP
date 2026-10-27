int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 18;
    int v1 = 33;
    int v2 = 33;
    int v3 = 80;
    int i;
    v0 = __helper(v0);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v3 = v3 & v1;
    return v0;
}
int main(void) { return test_func(); }
