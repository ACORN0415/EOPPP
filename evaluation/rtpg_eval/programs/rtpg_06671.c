int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 74;
    int v1 = 58;
    int v2 = 82;
    int v3 = 56;
    int v4 = 95;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 20; i++) {
        v2 = v2 + v0;
    }
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
