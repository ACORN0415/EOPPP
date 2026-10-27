int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 52;
    int v1 = 23;
    int v2 = 60;
    int v3 = 16;
    int v4 = 76;
    int v5 = 16;
    int i;
    v0 = 95;
    v3 = v3 + v1;
    v3 = v3 / (v2 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
