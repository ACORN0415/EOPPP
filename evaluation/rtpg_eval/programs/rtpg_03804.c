int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 4;
    int v2 = 11;
    int v3 = 73;
    int v4 = 69;
    int v5 = 90;
    int v6 = 48;
    int v7 = 69;
    int i;
    v7 = v7 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v5 = __helper(v5);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
