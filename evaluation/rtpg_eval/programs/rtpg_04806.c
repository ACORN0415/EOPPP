int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 65;
    int v2 = 6;
    int v3 = 54;
    int v4 = 45;
    int v5 = 72;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v2;
    }
    v0 = 34;
    v2 = v2 - v4;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
