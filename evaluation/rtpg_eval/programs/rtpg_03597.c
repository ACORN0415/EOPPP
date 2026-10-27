int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3597[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 45;
    int v2 = 28;
    int v3 = 89;
    int v4 = 7;
    int v5 = 60;
    int v6 = 30;
    int v7 = 46;
    int i;
    for (i = 0; i < 10; i++) { __arr_3597[i] = v1 + i; }
    v2 = 74;
    if (v5 > v1) { v5 = v1; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    v7 = __helper(v7);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
