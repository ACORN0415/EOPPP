int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 37;
    int v1 = 82;
    int v2 = 93;
    int v3 = 50;
    int v4 = 5;
    int v5 = 40;
    int v6 = 85;
    int i;
    v6 = 30;
    v6 = __helper(v6);
    int *__p = &v1;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
