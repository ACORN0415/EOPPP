int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 68;
    int v1 = 16;
    int v2 = 56;
    int v3 = 3;
    int v4 = 77;
    int v5 = 54;
    int v6 = 98;
    int v7 = 33;
    int i;
    v4 = 54;
    v0 = v0 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
