int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 31;
    int v1 = 26;
    int v2 = 67;
    int v3 = 79;
    int v4 = 66;
    int v5 = 3;
    int i;
    v4 = v4 * 4;
    v5 = __helper(v5);
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
