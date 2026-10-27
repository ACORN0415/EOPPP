int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 19;
    int v2 = 41;
    int v3 = 17;
    int v4 = 10;
    int v5 = 43;
    int v6 = 25;
    int v7 = 32;
    int i;
    v5 = v5 * 7;
    v5 = v5 - v2;
    if (v6 > v0) { v6 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v3;
    *__p = *__p + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
