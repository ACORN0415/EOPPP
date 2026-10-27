int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 3;
    int v1 = 35;
    int v2 = 6;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v2;
    }
    v1 = 90;
    v2 = v2 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v1 = v1 | v2;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
