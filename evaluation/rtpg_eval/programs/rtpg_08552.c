int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 39;
    int v1 = 51;
    int v2 = 39;
    int v3 = 3;
    int v4 = 20;
    int v5 = 53;
    int v6 = 9;
    int v7 = 85;
    int i;
    v0 = v0 - v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v5 = __helper(v5);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
