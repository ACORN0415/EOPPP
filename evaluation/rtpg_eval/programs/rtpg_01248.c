int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 56;
    int v1 = 15;
    int v2 = 18;
    int v3 = 81;
    int v4 = 80;
    int i;
    if (v1 > v4) { v1 = v4; }
    v1 = 98;
    v2 = __helper(v2);
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
