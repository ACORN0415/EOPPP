int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 81;
    int v1 = 99;
    int v2 = 27;
    int i;
    if (v0 > v0) { v0 = v0; }
    v2 = v2 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
