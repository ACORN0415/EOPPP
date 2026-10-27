int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 1;
    int v1 = 66;
    int v2 = 46;
    int v3 = 45;
    int v4 = 66;
    int v5 = 59;
    int v6 = 28;
    int v7 = 63;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v6;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v3 = __helper(v3);
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
