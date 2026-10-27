int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 95;
    int v1 = 55;
    int v2 = 2;
    int v3 = 84;
    int i;
    v2 = v2 - v3;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
