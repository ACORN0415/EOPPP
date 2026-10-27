int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8005[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 73;
    int v2 = 22;
    int v3 = 15;
    int v4 = 35;
    int v5 = 100;
    int v6 = 94;
    int i;
    v1 = v1 - v5;
    for (i = 0; i < 10; i++) { __arr_8005[i] = v3 + i; }
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
