int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 77;
    int v1 = 13;
    int v2 = 3;
    int v3 = 36;
    int v4 = 17;
    int v5 = 22;
    int v6 = 11;
    int i;
    v1 = v1 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v6 = __helper(v6);
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
