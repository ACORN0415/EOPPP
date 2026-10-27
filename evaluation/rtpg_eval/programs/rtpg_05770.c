int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 19;
    int v1 = 77;
    int v2 = 69;
    int v3 = 66;
    int v4 = 55;
    int v5 = 82;
    int v6 = 95;
    int v7 = 13;
    int i;
    v1 = v1 - v6;
    v4 = __helper(v4);
    int *__p = &v4;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
