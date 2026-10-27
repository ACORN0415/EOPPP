int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 29;
    int v1 = 83;
    int v2 = 12;
    int v3 = 26;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v2;
    }
    v2 = v2 * 4;
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
