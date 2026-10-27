int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 40;
    int v1 = 81;
    int v2 = 12;
    int v3 = 75;
    int v4 = 36;
    int v5 = 2;
    int v6 = 5;
    int i;
    if (v4 > v0) { v4 = v0; }
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
