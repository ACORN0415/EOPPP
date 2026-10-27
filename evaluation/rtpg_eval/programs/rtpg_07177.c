int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 15;
    int v1 = 40;
    int v2 = 50;
    int v3 = 86;
    int v4 = 33;
    int v5 = 33;
    int i;
    v4 = v4 * 6;
    int *__p = &v4;
    *__p = *__p + 1;
    v3 = __helper(v3);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
