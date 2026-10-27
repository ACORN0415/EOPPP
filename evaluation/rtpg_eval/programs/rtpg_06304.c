int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 17;
    int v2 = 61;
    int v3 = 52;
    int v4 = 45;
    int i;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v4;
    }
    v4 = v4 + v0;
    v0 = 0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v3 = __helper(v3);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
