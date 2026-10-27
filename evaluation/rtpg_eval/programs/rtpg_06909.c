int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 97;
    int v2 = 74;
    int v3 = 81;
    int v4 = 66;
    int v5 = 63;
    int v6 = 42;
    int i;
    v0 = 95;
    if (v4 > v6) { v4 = v6; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v1 = __helper(v1);
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
