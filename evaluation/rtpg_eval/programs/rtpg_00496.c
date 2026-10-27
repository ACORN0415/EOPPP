int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 18;
    int v2 = 18;
    int v3 = 43;
    int v4 = 86;
    int i;
    v1 = v1 - v3;
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
