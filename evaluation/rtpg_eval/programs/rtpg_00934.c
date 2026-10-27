int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 12;
    int v1 = 2;
    int v2 = 98;
    int v3 = 67;
    int v4 = 20;
    int v5 = 7;
    int v6 = 59;
    int i;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v2;
    }
    v3 = v3 + v5;
    v5 = 84;
    v5 = __helper(v5);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v2 = v2 ^ v4;
    return v0;
}
int main(void) { return test_func(); }
