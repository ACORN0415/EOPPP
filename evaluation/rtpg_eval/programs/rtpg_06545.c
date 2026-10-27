int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 2;
    int v1 = 20;
    int v2 = 73;
    int v3 = 37;
    int v4 = 72;
    int v5 = 9;
    int i;
    v0 = v0 - v3;
    v5 = v5 * 2;
    v1 = v1 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
