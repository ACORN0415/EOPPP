int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2074[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 41;
    int v2 = 62;
    int v3 = 95;
    int i;
    v2 = v2 * 3;
    for (i = 0; i < 10; i++) { __arr_2074[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v2 = __helper(v2);
    v2 = v2 & v3;
    return v0;
}
int main(void) { return test_func(); }
