int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6095[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 27;
    int v2 = 24;
    int v3 = 77;
    int v4 = 67;
    int v5 = 0;
    int v6 = 29;
    int i;
    for (i = 0; i < 10; i++) { __arr_6095[i] = v5 + i; }
    v6 = v6 - v1;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
