int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 87;
    int v2 = 19;
    int v3 = 28;
    int v4 = 2;
    int v5 = 70;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v2;
    }
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
