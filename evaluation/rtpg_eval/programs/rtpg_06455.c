int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 26;
    int v1 = 48;
    int v2 = 73;
    int v3 = 59;
    int v4 = 63;
    int v5 = 83;
    int i;
    if (v5 > v4) { v5 = v4; }
    v0 = 37;
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
