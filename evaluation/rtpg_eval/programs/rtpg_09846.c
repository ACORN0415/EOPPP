int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 74;
    int v1 = 0;
    int v2 = 81;
    int v3 = 39;
    int v4 = 53;
    int v5 = 90;
    int v6 = 17;
    int v7 = 47;
    int i;
    v0 = v0 + v3;
    v0 = __helper(v0);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
