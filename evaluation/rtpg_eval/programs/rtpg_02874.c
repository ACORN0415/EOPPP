int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2874[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 89;
    int v2 = 76;
    int v3 = 54;
    int v4 = 45;
    int v5 = 73;
    int v6 = 69;
    int v7 = 51;
    int i;
    for (i = 0; i < 10; i++) { __arr_2874[i] = v4 + i; }
    if (v7 > v0) { v7 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
