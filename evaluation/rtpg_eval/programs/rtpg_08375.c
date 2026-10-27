int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8375[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 3;
    int v2 = 34;
    int v3 = 14;
    int v4 = 38;
    int v5 = 95;
    int v6 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_8375[i] = v6 + i; }
    v3 = v3 - v2;
    v1 = v1 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
