int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 50;
    int v1 = 81;
    int v2 = 66;
    int v3 = 95;
    int v4 = 28;
    int v5 = 21;
    int v6 = 4;
    int i;
    v0 = v0 * 5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
