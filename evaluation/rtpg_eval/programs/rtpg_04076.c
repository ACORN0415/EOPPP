int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4076[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 2;
    int v2 = 20;
    int v3 = 6;
    int v4 = 1;
    int i;
    v2 = 90;
    for (i = 0; i < 10; i++) { __arr_4076[i] = v2 + i; }
    v0 = __helper(v0);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
