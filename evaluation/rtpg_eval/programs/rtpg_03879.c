int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3879[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 77;
    int v2 = 4;
    int v3 = 7;
    int v4 = 59;
    int v5 = 92;
    int i;
    for (i = 0; i < 10; i++) { __arr_3879[i] = v2 + i; }
    v4 = __helper(v4);
    v3 = v3 / (v2 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
