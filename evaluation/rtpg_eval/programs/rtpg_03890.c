int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 86;
    int v2 = 70;
    int v3 = 14;
    int v4 = 52;
    int v5 = 70;
    int v6 = 62;
    int v7 = 50;
    int i;
    int *__p = &v7;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
