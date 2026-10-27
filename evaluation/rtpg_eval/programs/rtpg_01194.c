int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1194[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 19;
    int v2 = 13;
    int v3 = 97;
    int v4 = 28;
    int v5 = 33;
    int v6 = 86;
    int v7 = 58;
    int i;
    for (i = 0; i < 10; i++) { __arr_1194[i] = v2 + i; }
    v3 = __helper(v3);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
