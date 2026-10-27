int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5719[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 24;
    int v2 = 2;
    int v3 = 12;
    int v4 = 44;
    int v5 = 89;
    int v6 = 17;
    int i;
    for (i = 0; i < 10; i++) { __arr_5719[i] = v3 + i; }
    v5 = 44;
    v6 = __helper(v6);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
