int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 39;
    int v2 = 6;
    int v3 = 80;
    int v4 = 93;
    int i;
    v3 = v3 + v1;
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
